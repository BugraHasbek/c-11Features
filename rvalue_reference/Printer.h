#include <string>
#include <iostream>
using namespace std;

class Printer{
public:
    void printString(const string & s);
    void printString(string&& s);
};