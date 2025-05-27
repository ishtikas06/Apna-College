#include <iostream>
#include <string>
using namespace std;

//MULTI-LEVEL INHERITANCE
// Animal -> Mammal -> Dog
class Animal {
public:
    void eat(){
        cout<<"Eats \n";
    }

    void breathe(){
        cout<<"Breathe \n";
    }
};

class Mammal : public Animal {
public:
    string bloodtype = "warm";
};

class Dog : public Mammal {
public:
    void railwag(){
        cout<<"Wags tail\n";
    }
};

//MULTIPLE INHERITANCE
class Teacher {
public:
    int salary;
    string subject;
};

class Student {
public:
    int rollno;
    float cgpa;
};

class PhD : public Teacher, public Student {
public:
    string name;
};


int main() {

return 0;
}