use std::path::PathBuf;
use std::process::Command;
use std::{env, fs};

fn main() {
    let cargo_dir = PathBuf::from(env::var_os("CARGO_MANIFEST_DIR").unwrap());
    let src = cargo_dir.join("mesa-src");
    let dst = PathBuf::from(env::var_os("OUT_DIR").unwrap()).join("mesa");
    let _ = fs::create_dir(&dst);

    if !dst.join("build.ninja").exists() {
        let mut cmd = Command::new("meson");

        if let Some(cross_path) = env::var_os("MESON_CROSSFILE") {
            cmd
                .arg("--cross-file")
                .arg(cross_path);
        }

        run(cmd
            .current_dir(&dst)
            .arg(&src)
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
            .arg("-Dglx=disabled")
            .arg("-Dllvm=enabled"));
    }

    run(Command::new("ninja").current_dir(&dst));
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
