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

    ~Car() {
        cout<<"Deleting object\n";
        if(mileage != NULL)
        {
            delete mileage;
            mileage = NULL;
        }
    }
};

int main() {

    Car c1;
    c1.name = "glanza";
    c1.color = "white";
    cout<<*c1.mileage<<endl;

return 0;
}