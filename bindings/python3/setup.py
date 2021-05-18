import os
from platform import system
from setuptools import Extension, setup

setup(
    name="tree-sitter-jinja2",
    version="0.0.3",
    platforms=["any"],
    python_requires=">=3.6",
    packages=["tree_sitter_jinja2"],
    install_requires=[
        'tree_sitter==0.19.0'
    ],
    ext_modules=[
        Extension(
            "tree-sitter-jinja2",
            [os.path.abspath("include/tree_sitter_jinja2.c")],
            [os.path.abspath("include")],
            extra_compile_args=(
                ["-std=c99", "-fPIC"] if system() != "Windows" else None
            ),
        )
    ],
)
