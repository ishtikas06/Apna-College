#include <iostream>
using namespace std;


void decToBin(int n)
{
    int dec = n;
    int bin = 0;
    int pow10 = 1;

    while(n>0)
    {
        int ldigit = n%2;
        bin += ldigit*pow10;
        pow10 *= 10;
        n /= 2;
    }

    cout<<bin;
}

int main() {
    decToBin(4);
return 0;
}