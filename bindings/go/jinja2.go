package tree_sitter_jinja2

// #cgo CFLAGS: -std=c11 -fPIC
// #include "../../src/parser.c"
import "C"

import "unsafe"

func LanguageJinja2() unsafe.Pointer {
	return unsafe.Pointer(C.tree_sitter_jinja2())
}
