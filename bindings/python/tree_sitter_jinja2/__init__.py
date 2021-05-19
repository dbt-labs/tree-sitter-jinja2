from tree_sitter import Language
import setuptools_dso

so_file = setuptools_dso.find_dso('tree-sitter-jinja2.language')

JINJA2_LANGUAGE = Language(so_file, 'jinja2')
