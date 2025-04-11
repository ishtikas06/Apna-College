#include <iostream>
#include <cmath>
using namespace std;

//Armstrong number
int main() {
int n;
cout<<"Enter a number: ";
cin>>n;
int n_copy = n;
int sum = 0;
int digit;

while(n > 0){
    digit = n % 10;
    sum += (digit*digit*digit);
    n /= 10;
}

if(sum == n_copy){
    cout<<"Armstrong!\n";
}else { cout<<"NOT Armstrong!\n"; }

return 0;
}