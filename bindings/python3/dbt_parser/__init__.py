import site
import os
from tree_sitter import Language, Parser

sitepackages = list(site.getsitepackages())
sitepackages.append(site.getusersitepackages())
so_file = next(
    os.path.join(directory, filename)
    for directory in sitepackages
    for filename in os.listdir(directory)
    if filename.startswith("dbt_jinja.") and filename.endswith(".so")
)

JINJA2_LANGUAGE = Language('build/dbt_jinja.so', 'dbt_jinja')

parser = Parser()
parser.set_language(JINJA2_LANGUAGE)
