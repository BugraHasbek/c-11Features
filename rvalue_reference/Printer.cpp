#include "Printer.h"

void Printer::printString(const string & s)
{
    cout << "Lvalue string: " << s << "\n";
}

void Printer::printString(string&& s)
{
    cout << "Rvalue string: " << s << "\n";
}