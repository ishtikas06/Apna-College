#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    if (n == 1){
        return false;
    }
    else{
        for(int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }

        return true;
    }
}

void prime_in_range(int n)
{   for (int i = 2; i <= n; i++)
    {
        if (isPrime(i)){
            cout<<i<<" ";
        } 
    } 
}

int main() {
int n = 25;
prime_in_range(n);
cout<<endl;
return 0;
}