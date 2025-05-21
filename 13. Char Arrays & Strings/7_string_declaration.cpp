#include <iostream>
#include<string>
using namespace std;

int main() {
// string str = "hello";
// cout<<str<<endl;
// str = "yellow";
// cout<<str<<endl;

string str;
getline(cin, str, '.');
cout<<str;
return 0;
}