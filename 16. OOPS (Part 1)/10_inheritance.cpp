#include <iostream>
#include <string>
using namespace std;

//Single Inheritance
class Animal {
public:
    string color;

    void eat(){
        cout<<"Eats \n";
    }

    void breathe(){
        cout<<"Breathe \n";
    }
};

class Fish : public Animal {
public:
    int fins;

    void swim(){
        cout<<"Swim\n"; 
    }
};

int main() {

return 0;
}