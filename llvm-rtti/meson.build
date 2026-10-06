project('llvm-rtti-probe', 'cpp', meson_version : '>= 1.1.0')

has_mcjit = host_machine.cpu_family() in ['aarch64', 'arm', 'ppc', 'ppc64', 's390x', 'x86', 'x86_64']
llvm = dependency(
  'llvm',
  method : 'config-tool',
  version : has_mcjit ? '>= 5.0.0' : '>= 15.0.0',
  static : false,
)

configure_file(
  input : 'llvm-rtti.in',
  output : 'llvm-rtti',
  configuration : {'LLVM_RTTI': llvm.get_variable(configtool : 'has-rtti')},
)
