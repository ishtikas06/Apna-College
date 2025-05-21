#include <iostream>
#include<string>
using namespace std;

int main() {
    string str = "Hello world";

    // for(int i = 0; i < str.length(); i++) // dot operator
    // {
    //     cout<<str[i]<<" ";
    // }

    for(char ch: str)
    {
        cout<<ch<<" ";
    }

    cout<<"\n";
return 0;
}