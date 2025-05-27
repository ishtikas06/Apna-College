#include <iostream>
#include <string>
using namespace std;

//Encapsulation -> just creating a class
class Student
{
    //Properties
    string name;
public:
    float cgpa;

    //Methods
    void getPercentage()
    {
        cout<<(cgpa*10)<<endl;
    }
};

int main() {
    Student s1;
return 0;
}