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

    //setter
    void setName (string nameVal)
    {
        name = nameVal;
    }

    //getter
    string getName()
    {
        return name;
    }
};

int main() {
    Student s1;
    // s1.name = "abc"; // name is a private property
    //to set a name we use setName function
    s1.setName("Ishtika");
    cout<<"Name: "<<s1.getName()<<endl;

    s1.cgpa = 8.01;
    cout<<"CGPA: "<<s1.cgpa<<endl;
    s1.getPercentage();
return 0;
}