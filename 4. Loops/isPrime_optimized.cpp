#include <iostream>
#include <cmath> //We can use math functions
using namespace std;

int main() {
    int n;
    bool isPrime = true;
    cout<<"Enter a value of n: ";
    cin>>n;

    for(int i =2; i <= sqrt(n); i++) //We can only check the factors upto "Root n" only. After that, the factors repeat.
    {
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout<<n<<" is Prime\n";
    }
    else { cout<<n<<" is NOT Prime\n";}

return 0;
}