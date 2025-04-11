#include <iostream>
using namespace std;

int main() {
int n;
cout<<"Enter a number: ";
cin>>n;

if (n > 0){
    cout<<"Positive number\n";
}
else if (n < 0)
{
    cout<<"Negative number\n";
}
else
{
    cout<<"Zero\n";
}

return 0;
}