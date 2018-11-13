use std::env;
use std::ffi::{OsStr, OsString};
use std::path::PathBuf;
use std::process::Command;

fn find_make() -> OsString {
    if let Some(make) = env::var_os("MAKE") {
        return make
    }

    match Command::new("gmake").status() {
        Ok(_) => OsStr::new("gmake").to_os_string(),
        Err(_) => OsStr::new("make").to_os_string(),
    }
}

fn main() {
    let src = PathBuf::from(env::var_os("CARGO_MANIFEST_DIR").unwrap());
    let dst = PathBuf::from(env::var_os("OUT_DIR").unwrap());

    // Prevent aclocal being run due to timestamps being messed up by git.
    // https://stackoverflow.com/questions/18769770/user-of-autotools-generated-tarball-gets-error-message-aclocal-1-13-command-no
    run(Command::new("touch")
                .current_dir(src.join("mesa-src"))
                .arg("configure.ac")
                .arg("aclocal.m4")
                .arg("configure")
                .arg("Makefile.am")
                .arg("Makefile.in")
                .arg("src/compiler/glsl/glcpp/glcpp-lex.c")
                .arg("src/mesa/program/lex.yy.c")
                .arg("src/compiler/glsl/glcpp/glcpp-parse.c")
                .arg("src/compiler/glsl/glsl_parser.cpp")
                .arg("src/mesa/program/program_parse.tab.c")
                .arg("src/compiler/glsl/glsl_lexer.cpp")
                .arg("src/glx/indirect.h")
                .arg("src/glx/indirect_init.c")
                .arg("src/mapi/glapi/glapi_mapi_tmp.h"));

    run(Command::new(src.join("mesa-src/configure"))
                .current_dir(&dst)
                .env("PTHREADSTUBS_CFLAGS", ".")
                .env("PTHREADSTUBS_LIBS", ".")
                .env("XCB_DRI2_CFLAGS", ".")
                .env("XCB_DRI2_LIBS", ".")
                .env("EXPAT_CFLAGS", ".")
                .env("EXPAT_LIBS", ".")
                .arg("--disable-dri")
                .arg("--disable-driglx-direct")
                .arg("--disable-dri3")
                .arg("--disable-egl")
                .arg("--disable-gbm")
                .arg("--disable-gles1")
                .arg("--disable-gles2")
                .arg("--disable-glx")
                .arg("--with-platforms=")
                .arg("--enable-gallium-osmesa")
                .arg("--with-gallium-drivers=swrast"));

    run(Command::new(find_make())
                .env("MAKEFLAGS", env::var("CARGO_MAKEFLAGS").unwrap_or_default())
                .env("PYTHONPATH", src.join("Mako-1.0.7.zip"))
                .current_dir(&dst));
}

fn run(cmd: &mut Command) {
    println!("running: {:?}", cmd);
    let status = match cmd.status() {
        Ok(s) => s,
        Err(e) => panic!("failed to get status: {}", e),
    };
    if !status.success() {
        panic!("failed with: {}", status);
    }
}
