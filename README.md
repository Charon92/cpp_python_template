# cpp_python_template
A basic template for setting up a C++ project to create a Python compatible library/Shared Object. 

It's important to note that this is an example of creating a Class (both in C++ and for Python) and the 
methods for just creating functions are a little different.

## Installation
Install from directory containg CMakeLists.txt using cmake (on a *nix system):
- `cmake -DPYTHON_EXECUTABLE=$(which python3) . && make && make install`

**An important note :**
When installing on Windows, the versions of the C++ compiler and Python will need to match (32 or 64-bit) or
Pybind11 will throw an error.

### Required packages
- [Pybind11](https://pybind11.readthedocs.io/en/stable/installing.html) can either be installed using the methods recommended in that link, or by simply using the `pybind11.cmake` included by
the line `include(pybind11.cmake)` in the `CMakeLists.txt` file. If you install locally, just comment out the `include()` line.
  

## How to use

Depending on your use-case it can be as simple as re-naming the class instances (in `/include/SampleClass.h`, `/src/SampleClass.cpp`
`bind.cpp` and `CMakeLists.txt`) then adding whatever methods you need. This is meant as some basic boilerplate to get you
started (by 'you', I mostly mean me because my memory is awful).

It has an example of an attribute, an empty constructor, a constructor that sets an attribute, a destructor, a getter 
and a setter. This should be enough more the majority of use-cases.

The `CMakeLists.txt` file has also been set out in such a way that adding new files/classes/functions is simple, 
just add the new files to the appropriate directories (header files to `include`, source files to `src`) and 
they will be collected and added via the `file()` functions.

## Feedback
If you have anything else that you think would be useful to have in this template, or if I've done something horribly wrong, 
feel free to let me know or even add them yourself and issue a pull request (I am primarily a Python dev, not C++ so my C++ 
won't be perfect or even great).

## DISCLAIMER
As I said above, *I AM NOT PRIMARILY A C++ DEVELOPER* so this could all almost certainly be improved, it just makes 
my life as a Python dev a little easier when I can download this repo, change a couple of things here and there 
and be on my way with a super-fast, Python compatible shared object.