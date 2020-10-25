#include <string>
using namespace std;

class PatientInfo{
    public:
        PatientInfo(string _name);
        string getName() const;
    private:
        string name;
};