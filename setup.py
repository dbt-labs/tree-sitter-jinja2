from platform import system
from setuptools import Extension, setup
# you can run `python setup.py bdist_wheel` on different different
# distributions and setuptools will take care of creating wheels (compiled
# python package) this could then be installed from PyPI

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
            ["{project}/bindings/python3/include/parser.c"],
            extra_compile_args=(
                ["-std=c99", "-fPIC"] if system() != "Windows" else None
            ),
        )
    ],
)
