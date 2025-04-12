#include <iostream>
using namespace std;

int factorial(int n) //Without recursion
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int binomial(int n, int m)
{
    int bino = factorial(n)/(factorial(m)*factorial(n-m));
    return bino;
}

int main() {
cout<<binomial(4,0);
return 0;
}