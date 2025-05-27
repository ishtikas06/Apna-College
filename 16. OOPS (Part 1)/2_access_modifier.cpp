#include <iostream>
#include <string>
using namespace std;

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
    // s1.name = "abc"; // name is a private property
    s1.cgpa = 8.01;
    cout<<"CGPA of student is: "<<s1.cgpa<<endl;
    s1.getPercentage();
return 0;
}