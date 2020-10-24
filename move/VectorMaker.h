#include <iostream>
#include <vector>

using namespace std;

class VectorMaker{

public:
    void makeCopyByValue(vector<int> v);
    void makeCopyByReference(vector<int> & v);
    void moveVector(vector<int> & v);
private:
    vector<int> memberVector1;
    vector<int> memberVector2;
    vector<int> memberVector3;
};