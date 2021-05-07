
# without args just build the project
.PHONY: all
all: build

# installs npm dependencies
.PHONY: install
install:
	npm install

# build tree-sitter
.PHONY: build
build: install
	npx tree-sitter generate

# runs the tree-sitter unit tests and python unit tests
.PHONY: test
test: build
	npx tree-sitter test

# docker must be running. build-wasm stage will print that error though
.PHONY: build
demo: build
	npx tree-sitter build-wasm
	npx tree-sitter web-ui

.PHONY: clean
clean:
	rm -rf node_modules/
	rm -f index.js
	find . -type f -name '*.wasm' -delete
	find . -type f -name '*.gyp' -delete
	rm -rf build/
	rm -rf src/
	rm -f Cargo.toml
	