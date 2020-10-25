
#include <iostream>
#include <vector>
#include <chrono>
#include <string>
#include <chrono>
#include "Patient.h"
using namespace std;

int main()
{
    std::chrono::time_point<std::chrono::system_clock> start1, end1, start2, end2;
    Patient p1("Bugra Hasbek", 3);
    Patient p2("Enver", 3);
    Patient p3("Emre", 5);
    Patient p4("Ertugrul", 1);
    Patient p5("Ferat", 2);
    Patient p6("Dylan Faden", 1000000000);
    Patient p7("Jesse Faden", 1000000000);

    vector<Patient> primeCandidates;
    start1 = std::chrono::system_clock::now();
    primeCandidates.push_back(p1);
    primeCandidates.push_back(p2);
    primeCandidates.push_back(p3);
    primeCandidates.push_back(p4);
    primeCandidates.push_back(p5);
    primeCandidates.push_back(p6);
    primeCandidates.push_back(p7);
    end1 = std::chrono::system_clock::now();

    vector<Patient> primeCandidates2;
    start2 = std::chrono::system_clock::now();
    primeCandidates2.push_back(std::move(p1));
    primeCandidates2.push_back(std::move(p2));
    primeCandidates2.push_back(std::move(p3));
    primeCandidates2.push_back(std::move(p4));
    primeCandidates2.push_back(std::move(p5));
    primeCandidates2.push_back(std::move(p6));
    primeCandidates2.push_back(std::move(p7));
    end2 = std::chrono::system_clock::now();

    std::chrono::duration<double> diff1 = end1 - start1; 
    std::chrono::duration<double> diff2 = end2 - start2; 
    auto dur1 = std::chrono::duration_cast<std::chrono::milliseconds>(diff1);
    auto dur2 = std::chrono::duration_cast<std::chrono::milliseconds>(diff2);
    cout << "Copy Constructor : " << dur1.count() << "ms \n";
    cout << "Move Constructor : " << dur2.count() << "ms \n";

    return 0;
}
