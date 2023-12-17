# Bindings for Rust

## To use the bindings in your project:

`Cargo.toml`:

```
[dependencies]
tree-sitter = "0.19"
tree-sitter-jinja2 = { git = "ssh://git@github.com/dbt-labs/tree-sitter-jinja2", branch = "main" }
```

```rust
let code = r#"This text supports {{ 'jinja' }}."#;
let mut parser = tree_sitter::Parser::new();
parser.set_language(tree_sitter_jinja2::language()).expect("Error loading jinja2 grammar");
let tree = parser.parse(code, None);
```
