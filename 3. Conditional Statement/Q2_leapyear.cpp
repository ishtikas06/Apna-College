#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the year: ";
    cin>>n;

    if(n%100 != 0)
    {
        if(n%4 == 0){
            cout<<"Leap Year\n";
        }
        else
        {
            cout<<"NOT Leap Year\n";
        }
        
    }
    else{
        if (n%400 == 0)
        {
            cout<<"Leap Year\n";
        }
        else
        {
            cout<<"NOT Leap Year\n";
        }
    }

return 0;
}