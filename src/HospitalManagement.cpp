#include "HospitalManagement.h"

void HospitalManagement::addDoctor(Doctor doctor) {
    doctors.push_back(doctor);
}

void HospitalManagement::addPatient(Patient patient) {
    patients.push_back(patient);
}

void HospitalManagement::addLabResult(LabResult labResult) {
    labResults.push_back(labResult);
}

Doctor* HospitalManagement::findDoctorById(int id) {
    for (auto& doctor : doctors) {
        if (doctor.getId() == id) {
            return &doctor;
        }
    }
    return nullptr;
}

Patient* HospitalManagement::findPatientById(int id) {
    for (auto& patient : patients) {
        if (patient.getId() == id) {
            return &patient;
        }
    }
    return nullptr;
}

LabResult* HospitalManagement::findLabResultById(int id) {
    for (auto& labResult : labResults) {
        if (labResult.getResultId() == id) {
            return &labResult;
        }
    }
    return nullptr;
}
