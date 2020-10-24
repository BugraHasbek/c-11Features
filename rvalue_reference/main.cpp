
#include <iostream>
#include <vector>
#include <chrono>
#include "Printer.h"

int main()
{
    Printer printer;
    string name = "bugra";

    printer.printString(name);
    printer.printString(printer.getName());
    printer.printString("temp_bugra");

    return 0;
}
