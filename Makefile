ifeq (highlight,$(firstword $(MAKECMDGOALS)))
  RUN_ARGS := $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))
  $(eval $(RUN_ARGS):;@:)
endif

ifeq (tags,$(firstword $(MAKECMDGOALS)))
  RUN_ARGS := $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))
  $(eval $(RUN_ARGS):;@:)
endif

generate:
	npm exec tree-sitter-cli generate

test:
	npm exec tree-sitter-cli test

test_examples:
	tree-sitter parse examples/**/*.qc --quiet --stat

highlight:
	tree-sitter highlight $(RUN_ARGS)

tags:
	tree-sitter tags $(RUN_ARGS)

.PHONY: test generate test_examples highlight tags
