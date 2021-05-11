import site
import os
from tree_sitter import Language, Parser

sitepackages = list(site.getsitepackages())
sitepackages.append(site.getusersitepackages())
so_file = next(
    os.path.join(directory, filename)
    for directory in sitepackages if os.path.exists(directory)
    for filename in os.listdir(directory)
    if filename.startswith("dbt_parser.") and filename.endswith(".so")
)

JINJA2_LANGUAGE = Language(so_file, 'dbt_jinja')

parser = Parser()
parser.set_language(JINJA2_LANGUAGE)
