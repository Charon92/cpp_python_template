#include "include/SampleClass.h"

#include <pybind11/stl.h>
#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(SampleClass, m) {
    py::class_<SampleClass>(m, "SampleClass")
            .def(py::init())
            .def("getName", &SampleClass::getName)
            .def("setName", &SampleClass::setName, py::arg("new_name"))
}
