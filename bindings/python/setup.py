import os
from platform import system
from setuptools_dso import DSO, setup
from setuptools.command.install import install


class InstallPlatlib(install):
    def finalize_options(self):
        install.finalize_options(self)
        if self.distribution.has_ext_modules():
            self.install_lib = self.install_platlib
            
dso = DSO(
    'tree-sitter-jinja2.language',
    [os.path.abspath("include/parser.c")],
    include_dirs=[os.path.abspath("include")],
    extra_compile_args=(
        ["-std=c99", "-fPIC"] if system() != "Windows" else None
    ),
)

setup(
    # fixes issue with manylinux build
    # (https://github.com/bigartm/bigartm/issues/840#issuecomment-342825690)
    cmdclass={'install': InstallPlatlib},
    x_dsos=[dso],
    # this forces platform specific wheels
    has_ext_modules=lambda: True
)
