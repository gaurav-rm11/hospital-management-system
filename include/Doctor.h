#ifndef DOCTOR_H
#define DOCTOR_H

#include "Person.h"

class Doctor : public Person {
private:
    string specialization;

public:
    Doctor(int id, string name, int age, string specialization);
    ~Doctor();

    void setSpecialization(string specialization);
    string getSpecialization() const;
};

#endif
