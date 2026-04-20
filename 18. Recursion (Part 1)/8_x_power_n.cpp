#include <iostream>
using namespace std;

//O(n)
// int pow(int x, int n)
// {
//     if(n == 0){
//         return 1;
//     }
//     return x*pow(x, n-1);
// }

//O(lohg)
int pow(int x, int n)
{
    if(n == 0){
        return 1;
    }
    int halfPow = pow(x, n/2);

    if (n % 2 == 0){
        return halfPow * halfPow;
    }
    else {
        return x * halfPow * halfPow;
    }
}

int main() {
cout<<pow(2,30)<<endl;
return 0;
}