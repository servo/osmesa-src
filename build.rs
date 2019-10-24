extern crate meson;

use std::env;
use std::fs::DirBuilder;
use std::path::PathBuf;
use std::process::Command;

/// Runs meson and/or ninja to build a project.
fn run_meson(lib: &str, dir: &str, args: &[&str]) {
    if !is_configured(dir) {
        let mut meson_args = vec![".", dir];
        meson_args.extend(args);
        run_command(lib, "meson", &meson_args);
    }
    run_command(dir, "ninja", &[]);
}

fn run_command(dir: &str, name: &str, args: &[&str]) {
    let mut cmd = Command::new(name);
    cmd.current_dir(dir);
    if args.len() > 0 {
        cmd.args(args);
    }
    eprintln!("{:?}", dir);
    eprintln!("{:?}", cmd);
    let status = cmd.status().expect("cannot run command");
    assert!(status.success());
}

fn is_configured(dir: &str) -> bool {
    let mut path = PathBuf::from(dir);
    path.push("build.ninja");
    return path.as_path().exists();
}

//XXX pip3 install mako

fn main() {
    if env::var_os("HOST").unwrap() != env::var_os("TARGET").unwrap() {
        panic!("meson build is not set up for cross-compilation");
    }

    let mut src = PathBuf::from(env::var_os("CARGO_MANIFEST_DIR").unwrap());
    src.push("mesa-src");
    let src = src.to_str().unwrap();
    let mut dst = PathBuf::from(env::var_os("OUT_DIR").unwrap());
    dst.push("build");
    if !dst.as_path().exists() {
        DirBuilder::new().create(&dst).unwrap();
    }

    let dst = dst.to_str().unwrap();

    run_meson(src, dst, &[
        "-D", "platforms=[]",
        "-D", "dri3=false",
        "-D", "gles1=false",
        "-D", "gles2=false",
        "-D", "egl=false",
        "-D", "osmesa=gallium",
        "-D", "glx=disabled",
        "-D", "gbm=false",
        "-D", "glx-direct=false",
        "-D", "gallium-drivers=['swrast']",
        "-D", "vulkan-drivers=[]",
        "-D", "dri-drivers=[]",
        "-D", "c_std=c11",
    ]);
}
