#include "Patient.h"

Patient::Patient(string name, int reqTestCount) : info(name), testCount(reqTestCount), testIndex(0), testResults(new int[reqTestCount])
{}

Patient::Patient(const Patient& other) : info(other.info.getName()), testCount(other.testCount), testIndex(other.testIndex), testResults(new int[other.testCount])
{
    for(int i = 0; i < testCount; i++)
        testResults[i] = other.testResults[i];
}

Patient::Patient(Patient&& other) : info(std::move(other.info)), testCount(other.testCount), testIndex(other.testIndex), testResults(other.testResults)
{}
