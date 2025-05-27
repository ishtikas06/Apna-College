#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string name;
    string color;
    int *mileage;

    Car(){
        mileage = new int; //Dynamic allocation
        *mileage = 12;
    }

    Car(Car &original) {
        cout<<"Copying...\n";
        name = original.name;
        color = original.color;
        // mileage = original.mileage; //Shallow copy
        mileage = new int; //Deep copy
        *mileage = *original.mileage;
        
    }
};

int main() {

    Car c1;
    c1.name = "glanza";
    c1.color = "white";

    Car c2(c1);
    cout<<c2.name<<endl;
    cout<<*c2.mileage<<endl;
    *c2.mileage = 10;
    cout<<*c2.mileage<<endl;
    cout<<*c1.mileage<<endl;

return 0;
}