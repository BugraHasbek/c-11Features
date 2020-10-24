#include <string>
#include <iostream>
using namespace std;

class Printer{
public:
    string getName() { return "getName_bugra"; }
    void printString(const string & s);
    void printString(string&& s);
};