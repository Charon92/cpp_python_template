cmake_minimum_required(VERSION 3.19)
project(cpp_python_template)

set(CMAKE_CXX_STANDARD 17)

file (GLOB SOURCE_FILES "src/*.cpp")
file (GLOB HEADER_FILES "include/*.h")
file (GLOB PYTHON_FILES "bind.cpp")

include(pybind11.cmake)  # comment if you have pybind11 installed locally
pybind11_add_module(SampleClass
        ${SOURCE_FILES}
        ${HEADER_FILES}
        ${PYTHON_FILES}
        )

target_link_libraries(SampleClass PUBLIC )
set_target_properties(SampleClass PROPERTIES OUTPUT_NAME "SampleClass" PREFIX "" SUFFIX ".so")

install(TARGETS SampleClass
        COMPONENT python
        LIBRARY DESTINATION "/"
        )
