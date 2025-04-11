#include <iostream>
using namespace std;

//Factorial of a number
int main() {
int n;
cout<<"Enter a number whose factorial is to be calculated: ";
cin>>n;
int fact = 1;

// int n_copy = n;
// while(n > 0){
//     fact *= n;
//     n = n-1;
// }

for(int i = 1; i <= n; i++)
{
    fact *= i;
}

cout<<"The factorial of "<<n<<" is: "<<fact;
cout<<"\n";
return 0;
}