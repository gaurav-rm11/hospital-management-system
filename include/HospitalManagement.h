#ifndef HOSPITALMANAGEMENT_H
#define HOSPITALMANAGEMENT_H

#include <vector>
#include "Doctor.h"
#include "Patient.h"
#include "LabResult.h"

class HospitalManagement {
private:
    vector<Doctor> doctors;
    vector<Patient> patients;
    vector<LabResult> labResults;

public:
    void addDoctor(Doctor doctor);
    void addPatient(Patient patient);
    void addLabResult(LabResult labResult);

    Doctor* findDoctorById(int id);
    Patient* findPatientById(int id);
    LabResult* findLabResultById(int id);
};

#endif
