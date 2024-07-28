#include "LabResult.h"

LabResult::LabResult(int resultId, int patientId, string result) 
    : resultId(resultId), patientId(patientId), result(result) {}

LabResult::~LabResult() {}

void LabResult::setResultId(int resultId) {
    this->resultId = resultId;
}

int LabResult::getResultId() const {
    return resultId;
}

void LabResult::setPatientId(int patientId) {
    this->patientId = patientId;
}

int LabResult::getPatientId() const {
    return patientId;
}

void LabResult::setResult(string result) {
    this->result = result;
}

string LabResult::getResult() const {
    return result;
}
