# Pybind11 (partial) code generator

This is an attempt for simple code generator to generate python binding for C++ libraries using [Pybind11](https://pybind11.readthedocs.io/en/stable/).

It is completely based on the ideas and code presented in the excelent article [implementing a code generator with libclang](http://szelei.me/code-generator), [Source Code](https://github.com/sztomi/code-generator).

It is absolutely not complete or well tested and probably contains mistakes. However it uses Clang for introspection and written in Python (3) so it can be easily understood, extended and adjusted. It therefore might be useful for somebody at some point in time.
For occasional use it should be suitable for generating a basic code that will be further edited and adjusted (It basically just saves some annoying typing)

## Usage:

Given a header file the generator will use clang to build the object model of the elements defined in the file and generate a function that will bind the functions, enumerations and classes that are defined in the file.
It will not generate the code to generate the module itself (i.e. will not generate 'example.cpp').

The code is shared as a Jupyter Notebook so the user can play around with the code interactively.

To build the example module run the notebook, save the generated file and build the module (see section 4).
The module should now be importable in Python (see section 5).

## Dependencies:

* libclang-py3 (libclang python binding)
* mako (for working with code templates)
* asciitree (for presenting the AST)
