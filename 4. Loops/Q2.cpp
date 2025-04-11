#include <iostream>
using namespace std;

//Multiplication table
int main() {
int n;
cout<<"Enter the value whose table is to be printed: ";
cin>>n;

for (int i = 1; i <= 10; i++){
    cout<<n<<" * "<<i<<" = "<<n*i<<endl;
}
return 0;
}