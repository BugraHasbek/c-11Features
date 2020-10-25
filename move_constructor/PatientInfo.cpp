#include "PatientInfo.h"

PatientInfo::PatientInfo(string _name) : name(_name) 
{}

string PatientInfo::getName() const
{
    return name;
}