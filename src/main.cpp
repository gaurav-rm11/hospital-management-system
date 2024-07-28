#include <iostream>
#include "HospitalManagement.h"

int main() {
    HospitalManagement hm;

    // Adding Doctors
    Doctor doc1(1, "Dr. Doom", 45, "Neurology");
    Doctor doc2(2, "Dr. John Watson", 50, "Cardiology");
    hm.addDoctor(doc1);
    hm.addDoctor(doc2);

    // Adding Patients
    Patient pat1(1, "Gaurav", 19, "Flu");
    Patient pat2(2, "Abhi", 20, "Headache");
    hm.addPatient(pat1);
    hm.addPatient(pat2);

    // Adding Lab Results
    LabResult lab1(1, 1, "Positive");
    LabResult lab2(2, 2, "Negative");
    hm.addLabResult(lab1);
    hm.addLabResult(lab2);

    // Finding and displaying a doctor
    Doctor* foundDoctor = hm.findDoctorById(1);
    if (foundDoctor != nullptr) {
        cout << "Doctor found: " << foundDoctor->getName() << ", Specialization: " << foundDoctor->getSpecialization() << endl;
    } else {
        cout << "Doctor not found" << endl;
    }

    // Finding and displaying a patient
    Patient* foundPatient = hm.findPatientById(1);
    if (foundPatient != nullptr) {
        cout << "Patient found: " << foundPatient->getName() << ", Ailment: " << foundPatient->getAilment() << endl;
    } else {
        cout << "Patient not found" << endl;
    }

    // Finding and displaying a lab result
    LabResult* foundLabResult = hm.findLabResultById(1);
    if (foundLabResult != nullptr) {
        cout << "Lab result found: " << foundLabResult->getResult() << endl;
    } else {
        cout << "Lab result not found" << endl;
    }

    return 0;
}
