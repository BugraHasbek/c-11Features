
#include <iostream>
#include <vector>
#include <chrono>
#include "Printer.h"

string getName() 
{
    return "getName_bugra"; 
}

int main()
{
    Printer printer;
    string name = "bugra";

    printer.printString(name);
    printer.printString(getName());
    printer.printString("temp_bugra");

    cout << "\nname after printing: " << name <<"\n";

    return 0;
}
