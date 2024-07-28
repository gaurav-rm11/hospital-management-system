#include "Doctor.h"

Doctor::Doctor(int id, string name, int age, string specialization) 
    : Person(id, name, age), specialization(specialization) {}

Doctor::~Doctor() {}

void Doctor::setSpecialization(string specialization) {
    this->specialization = specialization;
}

string Doctor::getSpecialization() const {
    return specialization;
}
