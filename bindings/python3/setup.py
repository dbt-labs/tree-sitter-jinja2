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
    'tree-sitter-jinja2-language',
    [os.path.abspath("include/tree_sitter_jinja2.c")],
    include_dirs=[os.path.abspath("include")],
    extra_compile_args=(
        ["-std=c99", "-fPIC"] if system() != "Windows" else None
    ),
)

setup(
    name="tree-sitter-jinja2",
    version="0.0.5",
    python_requires=">=3.6",
    packages=[
        "tree_sitter_jinja2",
    ],
    install_requires=[
        'tree_sitter==0.19.0',
        'setuptools-dso==2.0a1'
    ],
    cmdclass={'install': InstallPlatlib},
    x_dsos=[dso],
    zip_safe=False,
    # this forces platform specific wheels
    has_ext_modules=lambda: True
)
