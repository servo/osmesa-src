use std::path::PathBuf;
use std::process::Command;
use std::{env, fs};

fn main() {
    let src = PathBuf::from(env::var_os("CARGO_MANIFEST_DIR").unwrap());
    let dst = PathBuf::from(env::var_os("OUT_DIR").unwrap());
    let build_folder = dst.join("mesa");
    let _ = fs::create_dir(&build_folder);

    if !build_folder.join("build.ninja").exists() {
        run(Command::new("meson")
            .current_dir(&build_folder)
            .arg(&src.join("mesa-src"))
            .arg("-Dplatforms=")
            .arg("-Ddri3=disabled")
            .arg("-Dglx-direct=false")
            .arg("-Dgallium-drivers=swrast")
            .arg("-Dvulkan-drivers=")
            .arg("-Ddri-drivers=")
            .arg("-Dgles1=disabled")
            .arg("-Dgles2=disabled")
            .arg("-Dosmesa=gallium")
            .arg("-Degl=disabled")
            .arg("-Dgbm=disabled")
            .arg("-Dglx=disabled"));
    }

    run(Command::new("ninja").current_dir(&build_folder));
}

fn run(cmd: &mut Command) {
    eprintln!("running: {:?}", cmd);
    let status = match cmd.status() {
        Ok(s) => s,
        Err(e) => panic!("failed to get status: {}", e),
    };
    if !status.success() {
        panic!("failed with: {}", status);
    }
}
