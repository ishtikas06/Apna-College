#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string name;
    string color;

    Car(){
    }

    Car(Car &original) {
        cout<<"Copying...\n";
        name = original.name;
        color = original.color;
    }
};

int main() {

    Car c1;
    c1.name = "glanza";
    c1.color = "white";

    Car c2(c1);
    cout<<c2.name<<endl;

return 0;
}