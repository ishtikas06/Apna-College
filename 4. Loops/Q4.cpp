#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout<<"Enter a value of n: ";
    cin>>n;

    int j = 2;
    bool isPrime;
    
    while (j <= n ){
    isPrime = true;
    for(int i =2; i <= sqrt(j); i++) 
    {
        if(j % i == 0){
            isPrime = false;
            break;
        }
    } 
    if (isPrime){
        cout<<j<<" ";
    }
    j++;
}
return 0;
}