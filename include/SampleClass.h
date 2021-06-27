#ifndef CPP_PYTHON_TEMPLATE_SAMPLECLASS_H
#define CPP_PYTHON_TEMPLATE_SAMPLECLASS_H

#include <stdlib.h>
#include <string>

class SampleClass {
private:
    std::string name = "SampleClass";

public:
    SampleClass();
    SampleClass(std::string instance_name);
    ~SampleClass();
    std::string getName();
    void setName(const std::string& name);
};

#endif //CPP_PYTHON_TEMPLATE_SAMPLECLASS_H
