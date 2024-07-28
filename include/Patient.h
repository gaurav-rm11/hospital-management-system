#ifndef PATIENT_H
#define PATIENT_H

#include "Person.h"

class Patient : public Person {
private:
    string ailment;

public:
    Patient(int id, string name, int age, string ailment);
    ~Patient();

    void setAilment(string ailment);
    string getAilment() const;
};

#endif
