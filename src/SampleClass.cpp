#include "../include/SampleClass.h"

#include <iostream>
#include <utility>

SampleClass::SampleClass() {
    std::cout << "Creating a new SampleClass object with name: " << this->getName() << std::endl;
}

SampleClass::SampleClass(std::string instance_name) {
    this->name = instance_name;
    std::cout << "Creating a new SampleClass object with name: " << instance_name << " and setting this as the instances name" << std::endl;
}

SampleClass::~SampleClass() {
    std::cout << "Destroying a SampleClass object with name: " << this->getName() << std::endl;
}

std::string SampleClass::getName() {
    return this->name;
}

void SampleClass::setName(const std::string& new_name) {
    this->name = new_name;
}
