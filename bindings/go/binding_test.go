package tree_sitter_jinja2_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_jinja2 "github.com/bennypowers/tree-sitter-jinja2/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_jinja2.Language())
	if language == nil {
		t.Errorf("Error loading Jinja2 grammar")
	}
}
