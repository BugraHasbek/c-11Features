#include <iostream>
#include <vector>
#include <chrono>
#include "Maker.h"

int main()
{
    std::chrono::time_point<std::chrono::system_clock> start1, end1, start2, end2,  start3, end3;
    Maker<vector<int>> maker;
    vector<int> bigVector(1000000000, 50);

    start1 = std::chrono::system_clock::now(); 
    maker.makeCopyByValue(bigVector);
    end1 = std::chrono::system_clock::now(); 
    //std::cout << "bigVector size: " << bigVector.size() << "\n";

    start2 = std::chrono::system_clock::now(); 
    maker.makeCopyByReference(bigVector);
    end2 = std::chrono::system_clock::now(); 
    //std::cout << "bigVector size: " << bigVector.size() << "\n";

    start3 = std::chrono::system_clock::now(); 
    maker.move(bigVector);
    end3 = std::chrono::system_clock::now(); 
    //std::cout << "bigVector size: " << bigVector.size() << "\n";

    std::chrono::duration<double> diff1 = end1 - start1; 
    std::chrono::duration<double> diff2 = end2 - start2; 
    std::chrono::duration<double> diff3 = end3 - start3; 
    auto dur1 = std::chrono::duration_cast<std::chrono::milliseconds>(diff1);
    auto dur2 = std::chrono::duration_cast<std::chrono::milliseconds>(diff2);
    auto dur3 = std::chrono::duration_cast<std::chrono::milliseconds>(diff3);
    cout << "pass-by-value     : " << dur1.count() << "ms \n";
    cout << "pass-by-reference : " << dur2.count() << "ms \n";
    cout << "std::move         : " << dur3.count() << "\n\n";


    string name = "Bugra";
    string middlename = "M.";
    string surname = "Hasbek";

    Maker<string> stringMaker;
    stringMaker.makeCopyByValue(name);
    stringMaker.makeCopyByReference(middlename);
    stringMaker.move(surname);
    string dublicateName = stringMaker.getCopyByValue();
    string dublicateMiddleName = stringMaker.getCopyByReference();
    string dublicateSurname = stringMaker.getMove();

    cout << "Dublicated Name Surname : " << dublicateName << " " << dublicateMiddleName << " "<< dublicateSurname << "\n";
    cout << "Name Surname            : " << name << " " << middlename << surname << "\n";
    return 0;
}
