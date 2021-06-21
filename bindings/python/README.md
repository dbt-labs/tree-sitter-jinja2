# Bindings for Python

## To use the bindings in your project:

`requirements.txt`:
```
tree-sitter==0.19.0
tree-sitter-jinja2
```

```python
from tree_sitter_jinja2 import JINJA2_LANGUAGE
from tree_sitter import Parser

source = bytes("{{ True }}", "utf8")

parser = Parser()
parser.set_language(JINJA2_LANGUAGE)

tree = parser.parse(source)
```

## To build the wheel locally
```
make bindings
```
