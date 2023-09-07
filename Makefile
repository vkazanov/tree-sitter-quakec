# If the first argument is "run"...
ifeq (highlight,$(firstword $(MAKECMDGOALS)))
  RUN_ARGS := $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))
  $(eval $(RUN_ARGS):;@:)
endif

generate:
	npm exec tree-sitter-cli generate

test:
	npm exec tree-sitter-cli test

test_examples:
	node_modules/tree-sitter-cli/tree-sitter parse examples/**/*.qc --quiet --stat

highlight:
	node_modules/tree-sitter-cli/tree-sitter highlight $(RUN_ARGS)
