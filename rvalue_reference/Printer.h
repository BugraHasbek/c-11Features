#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Printer{
public:
    void printString(string & s);
    void printString(string&& s);

private:
    vector<string> printedStrings;
};