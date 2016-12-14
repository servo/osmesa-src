use std::env;
use std::path::PathBuf;
use std::process::Command;

fn main() {
    let src = env::current_dir().unwrap();
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
                .arg("src/compiler/glsl/glsl_lexer.cpp"));

    run(Command::new(src.join("mesa-src/configure"))
                .current_dir(&dst)
                .env("PTHREADSTUBS_CFLAGS", ".")
                .env("PTHREADSTUBS_LIBS", ".")
                .arg("--disable-dri")
                .arg("--disable-driglx-direct")
                .arg("--disable-dri3")
                .arg("--disable-egl")
                .arg("--disable-gbm")
                .arg("--disable-gles1")
                .arg("--disable-gles2")
                .arg("--disable-glx")
                .arg("--disable-vulkan")
                .arg("--enable-gallium-osmesa")
                .arg("--with-gallium-drivers=swrast"));

    run(Command::new("make")
                .arg(format!("-j{}", env::var("NUM_JOBS").unwrap()))
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
