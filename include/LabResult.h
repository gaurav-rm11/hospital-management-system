#ifndef LABRESULT_H
#define LABRESULT_H

#include <string>
using namespace std;

class LabResult {
private:
    int resultId;
    int patientId;
    string result;

public:
    LabResult(int resultId, int patientId, string result);
    ~LabResult();

    void setResultId(int resultId);
    int getResultId() const;

    void setPatientId(int patientId);
    int getPatientId() const;

    void setResult(string result);
    string getResult() const;
};

#endif
