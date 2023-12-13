# Contributing to `tree-sitter-jinja2`

`tree-sitter-jinja2` is a Jinja2 grammar for tree-sitter.  At present, the jinja grammar described in this repo is highly simplified and incomplete. It is primarily intended to support dbt-extractor. It may be elaborated in the future.


1. [About this document](#about-this-document)
2. [Getting the code](#getting-the-code)
3. [Setting up an environment](#setting-up-an-environment)
4. [Running in development](#running-tree-sitter-jinja2-in-development)
5. [Testing](#testing)
6. [Debugging](#debugging)
7. [Adding or modifying a changelog entry](#adding-or-modifying-a-changelog-entry)
8. [Submitting a Pull Request](#submitting-a-pull-request)
9. [Troubleshooting Tips](#troubleshooting-tips)

## About this document

There are many ways to contribute to the ongoing development of `tree-sitter-jinja2`, such as by participating in discussions and issues. We encourage you to first read our higher-level document: ["Expectations for Open Source Contributors"](https://docs.getdbt.com/docs/contributing/oss-expectations).

The rest of this document serves as a more granular guide for contributing code changes to `tree-sitter-jinja2` (this repository). It is not intended as a guide for using `tree-sitter-jinja2`, and some pieces assume a level of familiarity with Python development (virtualenvs, `pip`, etc), JavaScript, and Node.js. Specific code snippets in this guide assume you are using macOS or Linux and are comfortable with the command line.

### Notes

- **CLA:** Please note that anyone contributing code to `tree-sitter-jinja2` must sign the [Contributor License Agreement](https://docs.getdbt.com/docs/contributor-license-agreements). If you are unable to sign the CLA, the `tree-sitter-jinja2` maintainers will unfortunately be unable to merge any of your Pull Requests. We welcome you to participate in discussions, open issues, and comment on existing ones.
- **Branches:** All pull requests from community contributors should target the `main` branch (default).
- **Releases**: This repository is released on an as needed basis.

## Getting the code

### Installing git

You will need `git` in order to download and modify the source code.

### External contributors

If you are not a member of the `dbt-labs` GitHub organization, you can contribute to `tree-sitter-jinja2` by forking the `tree-sitter-jinja2` repository. For a detailed overview on forking, check out the [GitHub docs on forking](https://help.github.com/en/articles/fork-a-repo). In short, you will need to:

1. Fork the `tree-sitter-jinja2` repository
2. Clone your fork locally
3. Check out a new branch for your proposed changes
4. Push changes to your fork
5. Open a pull request against `dbt-labs/tree-sitter-jinja2` from your forked repository

### dbt Labs contributors

If you are a member of the `dbt-labs` GitHub organization, you will have push access to the `tree-sitter-jinja2` repo. Rather than forking `tree-sitter-jinja2` to make your changes, just clone the repository, check out a new branch, and push directly to that branch.

## Building `tree-sitter-jinja2`

### Requirements

In order to build `tree-sitter-jinja2`, you will need to have Python 3 and Node.js installed.


### Building `tree-sitter-jinja2`

Once you have the requirements installed, you can move to the repo root directory and run the command `make build` to convert the grammar description into parser source code. The build output is C source code which can be found in the `src` subdirectory.

## Testing

Once you're able to manually test that your code change is working as expected, it's important to run existing automated tests, as well as adding some new ones. These tests will ensure that:
- Your code changes do not unexpectedly break other established functionality
- Your code changes can handle all known edge cases
- The functionality you're adding will _keep_ working in the future

### Test commands

In the repo root directory, run the command `make test` to run the unit tests.

### Test 

Tests are defined by plain text files located in `tree-sitter-jinja2/tests/corpus`. A test file contains a sequence of named test cases, each with a jinja block and expected parse tree.

For example, the following test case will appear in test output as `dict with bools`. It parses a jinja source file consisting of a block containing a simple dict. The resulting parse tree is compared to the expected parse tree defined below the jinja as an S-expression. If the actual parse tree matches the expected parse tree, the test passes.

```
==================
dict with bools
==================

{{ {'x':True, 'y': False} }}

---

(source_file
  (dict
    (pair 
      (lit_string)
      (bool)
    )
    (pair 
      (lit_string)
      (bool)
    )
  )
)
```

## Debugging

See the tree-sitter documentation for information about debugging a grammar.


## Submitting a Pull Request

Code can be merged into the current development branch `main` by opening a pull request. A `tree-sitter-jinja2` maintainer will review your PR. They may suggest code revision for style or clarity, or request that you add unit or integration test(s). These are good things! We believe that, with a little bit of help, anyone can contribute high-quality code.

Automated tests run via GitHub Actions. If you're a first-time contributor, all tests (including code checks and unit tests) will require a maintainer to approve. Changes in the `tree-sitter-jinja2` repository trigger integration tests against Postgres. dbt Labs also provides CI environments in which to test changes to other adapters, triggered by PRs in those adapters' repositories, as well as periodic maintenance checks of each adapter in concert with the latest `tree-sitter-jinja2` code changes.

Once all tests are passing and your PR has been approved, a `tree-sitter-jinja2` maintainer will merge your changes into the active development branch. And that's it! Happy developing :tada:

## Troubleshooting Tips
- Sometimes, the content license agreement auto-check bot doesn't find a user's entry in its roster. If you need to force a rerun, add `@cla-bot check` in a comment on the pull request.
