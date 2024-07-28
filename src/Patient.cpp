#include "Patient.h"

Patient::Patient(int id, string name, int age, string ailment) 
    : Person(id, name, age), ailment(ailment) {}

Patient::~Patient() {}

void Patient::setAilment(string ailment) {
    this->ailment = ailment;
}

string Patient::getAilment() const {
    return ailment;
}
