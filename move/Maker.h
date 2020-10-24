#include <iostream>
#include <vector>

using namespace std;

template <class T>
class Maker{
public:
    // Time complexity: O(2n) --> O(n)
    // n for dublicating main::bigVector to parameterVector
    // n for dublicating parameterVector to  memberVector
    void makeCopyByValue(T parameterVector)         {   member1 = parameterVector;  }
    T getCopyByValue()                              {   return member1;             }

    // Time complexity: O(n)
    // n for dublicating parameterVector to memberVector
    // since we are using pass-by-reference main::bigVector will not be copied to parameterVector
    // instead parameterVector will refer to main::bigVector
    void makeCopyByReference(T & parameterVector)   {   member2 = parameterVector;  }
    T getCopyByReference()                          {   return member2;             }

    // Time complexity: O(1)
    // std::move basically tells the compiler to static_cast parameterVector to memberVector 
    // note that main::bigVector becomes empty due to std::move
    void move(T & parameterVector)                  {   member3 = std::move(parameterVector);   }
    T getMove()                                     {   return member3;                         }

private:
    T member1;
    T member2;
    T member3;
};