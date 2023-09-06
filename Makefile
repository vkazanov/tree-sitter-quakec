generate:
	npm exec tree-sitter-cli generate

test:
	npm exec tree-sitter-cli test

test_examples:
	node_modules/tree-sitter-cli/tree-sitter parse examples/**/*.qc --quiet --stat
