package tree_sitter_jinja2_test

import (
	"testing"

	tree_sitter_jinja2 "github.com/bennypowers/tree-sitter-jinja2/bindings/go"
	tree_sitter "github.com/tree-sitter/go-tree-sitter"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_jinja2.LanguageJinja2())
	if language == nil {
		t.Fatal("failed to load jinja2 grammar")
	}
}
