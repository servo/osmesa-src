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
        cmd.arg("setup");
        let probe_dir = dst.with_file_name("llvm-rtti");
        let mut probe = Command::new("meson");
        probe
            .arg("setup")
            .arg(&probe_dir)
            .arg(cargo_dir.join("llvm-rtti"))
            .current_dir(&dst);
        if probe_dir.join("build.ninja").exists() {
            probe.arg("--reconfigure");
        }

        if let Some(cross_path) = env::var_os("MESON_CROSSFILE") {
            cmd.arg("--cross-file").arg(&cross_path);
            probe.arg("--cross-file").arg(&cross_path);
        }

        run(&mut probe);
        let rtti = fs::read_to_string(probe_dir.join("llvm-rtti")).unwrap();
        let rtti = match rtti.trim() {
            "YES" => "-Dcpp_rtti=true",
            "NO" => "-Dcpp_rtti=false",
            value => panic!("unexpected LLVM RTTI setting: {:?}", value),
        };

        run(cmd
            .current_dir(&dst)
            .arg(&src)
            .arg(rtti)
            .arg("-Dplatforms=")
            .arg("-Dgallium-drivers=softpipe,llvmpipe")
            .arg("-Dvulkan-drivers=")
            .arg("-Dgles1=disabled")
            .arg("-Dgles2=disabled")
            .arg("-Dosmesa=true")
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
