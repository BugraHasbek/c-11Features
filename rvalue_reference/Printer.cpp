#include "Printer.h"

void Printer::printString(string & s)
{
    cout << "Lvalue string: " << s << "\n";
    printedStrings.push_back(s);
}

void Printer::printString(string&& s)
{
    cout << "Rvalue string: " << s << "\n";
    printedStrings.push_back(std::move(s));
}