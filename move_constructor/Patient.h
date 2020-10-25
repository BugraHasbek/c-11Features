#include "PatientInfo.h"

class Patient{
public:
    Patient(string name, int reqTestCount);
    Patient(const Patient& other);
    Patient(Patient&& other);
    
private:
    int * testResults;
    int testCount;
    int testIndex;
    PatientInfo info;
};