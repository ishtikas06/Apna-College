#include <iostream>
#include <string>
using namespace std;

class Car
{
    string name;
    string color;
public:
    //NON-PARAMETERIZED CONSTRUCTOR
    Car() {
        cout<<"Non parameterized constructor.\n";
    }

    //PARAMETERIZED CONSTRUCTOR
    // Car(string nameValue, string colorValue) {
    //     cout<<"Constructor is called.\n";
    //     name = nameValue;
    //     color = colorValue;
    // }

    //here "name" is the parameter
    Car(string name, string color) {
        cout<<"Parameterized constructor.\n";
        this -> name = name;  //this -> name: points to the name of the object.
        this -> color = color;
    }

    void start()
    {
        cout<<"Car has started...\n";
    }
    void stop()
    {
        cout<<"Car has stopped...\n";
    }
    
    string getName()
    {
        return name;
    }
};

int main() {
    Car c0;
    Car c1("Glanza", "White");
    cout<<"Car name: "<<c1.getName()<<endl;
return 0;
}