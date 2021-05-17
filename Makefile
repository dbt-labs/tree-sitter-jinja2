# toggles logging via `make <target-name> LOG=true`
ifeq "$(LOG)" ""
    LOG=false
endif

ifeq "$(LOG)" "false"
    L=@
endif

# system agnostic rm -f
ifdef ComSpec
    RMF=del /F /Q
else
    RMF=rm -f
endif 

# system agnostic rm -rf
ifdef ComSpec
    RMRF=rmdir /S /Q
else
    RMRF=rm -rf
endif 

# system agnostic find --delete
define rm_all
    $(if $(ComSpec), del /S /Q $(1), find . -type f -name '$(1)' -delete)
endef

# system agnostic cp
ifdef ComSpec
    CP=xcopy /R /H /Y
else
    CP=cp
endif 

# system agnostic command seprator
ifdef ComSpec
    CMDSEP=&
else
    CMDSEP=&&
endif 

# system agnostic path separators
ifdef ComSpec
    PATHSEP2=\\
else
    PATHSEP2=/
endif
PATHSEP=$(strip $(PATHSEP2))

# system agnostic ls (mostly for debugging the makefile)
ifdef ComSpec
    LS=dir
else
    LS=ls
endif


# without args just build the project
.PHONY: all
all: build

# installs npm dependencies
node_modules/tree-sitter-cli/tree-sitter/:
	$(L)npm install

.PHONY: install
install: node_modules/tree-sitter-cli/tree-sitter/
	$(L)pip install --upgrade pip
	$(L)pip install wheel

# build tree-sitter
.PHONY: build
build: install
	$(L)npx tree-sitter generate

# build bindings
.PHONY: bindings
bindings: build
	$(L)$(CP) src$(PATHSEP)parser.c bindings$(PATHSEP)python3$(PATHSEP)include$(PATHSEP)
	$(L)mkdir bindings$(PATHSEP)python3$(PATHSEP)include$(PATHSEP)tree_sitter$(PATHSEP)
	$(L)$(CP) src$(PATHSEP)tree_sitter$(PATHSEP)parser.h bindings$(PATHSEP)python3$(PATHSEP)include$(PATHSEP)tree_sitter$(PATHSEP)
	$(L)python3 setup.py bdist_wheel

# runs the tree-sitter unit tests and python unit tests
.PHONY: test
test: build
	$(L)npx tree-sitter test

# docker must be running. build-wasm stage will print that error though
.PHONY: build
demo: build
	$(L)npx tree-sitter build-wasm \
	$(CMDSEP) npx tree-sitter web-ui

.PHONY: clean
clean:
	$(L)$(RMRF) node_modules
	$(L)$(RMF) index.js
	$(L)$(RMRF) src
	$(L)$(RMRF) build
	$(L)$(call rm_all,*.wasm)
	$(L)$(call rm_all,*.gyp)
	$(L)$(RMF) Cargo.toml
	$(L)$(RMRF) build
	$(L)$(RMRF) bindings$(PATHSEP)python3$(PATHSEP)include
	$(L)mkdir bindings$(PATHSEP)python3$(PATHSEP)include
	$(L)echo # > bindings$(PATHSEP)python3$(PATHSEP)include$(PATHSEP).gitignore
	