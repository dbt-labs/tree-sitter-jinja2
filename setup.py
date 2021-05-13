# this cannot be built or installed locally. See the readme for
# instructions on how to install from pypi.

import os
from platform import system
from setuptools import Extension, setup

# specific to build tool:
PYTHON_BINDING_PATH = os.environ['PYTHON_BINDING_PATH']

setup(
    name="tree-sitter-jinja2",
    version="0.0.1",
    platforms=["any"],
    python_requires=">=3.6",
    packages=["bindings/python3/tree-sitter-jinja2"],
    install_requires=[
        'tree_sitter==0.19.0'
    ],
    ext_modules=[
        Extension(
            "tree-sitter-jinja2",
            [f"{PYTHON_BINDING_PATH}/include/parser.c"],
            extra_compile_args=(
                ["-std=c99", "-fPIC"] if system() != "Windows" else None
            ),
        )
    ],
)
