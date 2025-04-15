#include <iostream>
using namespace std;

void binToDec(int n)
{
    int bin = n;
    int dec = 0;
    int pow2 = 1; // 2^0 : power of 2
    while(n>0)
    {
        int digit = n%10;
        dec += digit*pow2;
        pow2 *= 2;
        n /= 10;
    }
    cout<<dec;
}

int main() {
    binToDec(100000);
return 0;
}