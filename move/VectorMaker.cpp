#include "VectorMaker.h"

// Time complexity: O(2n) --> O(n)
// n for dublicating main::bigVector to parameterVector
// n for dublicating parameterVector to  memberVector
void VectorMaker::makeCopyByValue(vector<int> parameterVector)
{
    this->memberVector1 = parameterVector;
}

// Time complexity: O(n)
// n for dublicating parameterVector to memberVector
// since we are using pass-by-reference main::bigVector will not be copied to parameterVector
// instead parameterVector will refer to main::bigVector
void VectorMaker::makeCopyByReference(vector<int> & parameterVector)
{
    this->memberVector2 = parameterVector;
}

// Time complexity: O(1)
// std::move basically tells the compiler to static_cast parameterVector to memberVector 
// note that main::bigVector becomes empty due to std::move
void VectorMaker::moveVector(vector<int> & parameterVector)
{
    this->memberVector3 = std::move(parameterVector);
}
