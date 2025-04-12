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

// int factorial(int n) //With recursion
// {
//     int f = 1;
//     if(factorial(0) || factorial(1)){
//         return 1;
//     }
//     else{
//         return f = factorial(n) * factorial(n-1);
//     }
// }

int main() {
    cout<<factorial(1);
return 0;
}