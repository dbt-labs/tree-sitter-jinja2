
# without args just build the project
.PHONY: all
all: build

# installs npm dependencies
grammar/node_modules/tree-sitter-cli/tree-sitter/:
	cd grammar \
	&& npm install

# alias
.PHONY: install
install: grammar/node_modules/tree-sitter-cli/tree-sitter/

# build tree-sitter
.PHONY: build
build: install
	cd grammar \
	&& npx tree-sitter generate

# build bindings
.PHONY: bindings
bindings: build
	cp ./grammar/src/parser.c bindings/python3/include/
	cp -r ./grammar/src/tree_sitter bindings/python3/include/
	cd ./bindings/python3/ \
	&& python3 setup.py bdist_wheel

# runs the tree-sitter unit tests and python unit tests
.PHONY: test
test: build
	cd grammar \
	&& npx tree-sitter test

# docker must be running. build-wasm stage will print that error though
.PHONY: build
demo: build
	cd grammar \
	&& npx tree-sitter build-wasm \
	&& npx tree-sitter web-ui

.PHONY: clean
clean:
	rm -rf grammar/node_modules/
	rm -f grammar/index.js
	rm -rf grammar/src/
	rm -rf grammar/build/
	find . -type f -name '*.wasm' -delete
	find . -type f -name '*.gyp' -delete
	rm -f Cargo.toml
	rm -rf bindings/python3/build/
	rm -rf bindings/python3/include/*
	rm -rf bindings/python3/dbt_parser/dist/
	rm -rf bindings/python3/dbt_parser.egg-info/
	