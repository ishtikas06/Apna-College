#include <iostream>
using namespace std;

int main() {
int num;
cout<<"Enter the value of num: ";
cin>>num;

//using for loop
// for (int i = 0; i < num; i++){
//     cout<<i+1<<" ";
// }

//using while loop
int i = 0;
while(i < num){
    cout<<i+1<<" ";
    i++;
}


return 0;
}