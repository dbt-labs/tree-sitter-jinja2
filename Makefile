
# without args just build the project
.PHONY: all
all: build

# installs npm dependencies
node_modules/tree-sitter-cli/tree-sitter/:
	npm install

# alias
.PHONY: install
install: node_modules/tree-sitter-cli/tree-sitter/

# build tree-sitter
.PHONY: build
build: install
	npx tree-sitter generate

# build bindings
.PHONY: bindings
bindings: build
	cp ./src/parser.c bindings/python3/include/
	cp -r ./src/tree_sitter bindings/python3/include/
	python3 setup.py bdist_wheel

# runs the tree-sitter unit tests and python unit tests
.PHONY: test
test: build
	npx tree-sitter test

# docker must be running. build-wasm stage will print that error though
.PHONY: build
demo: build
	npx tree-sitter build-wasm \
	&& npx tree-sitter web-ui

.PHONY: clean
clean:
	rm -rf node_modules/
	rm -f index.js
	rm -rf src/
	rm -rf build/
	find . -type f -name '*.wasm' -delete
	find . -type f -name '*.gyp' -delete
	rm -f Cargo.toml
	rm -rf ./build/
	rm -rf ./bindings/python3/include/*
	