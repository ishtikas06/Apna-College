#include <iostream>
using namespace std;

int main() {
    // char word[20];
    // cin>>word;  //takes any word as input without any space.
    // cout<<"Your word is: "<<word<<endl;

    char sentense[20];
    cin.getline(sentense, 20, '.');  //takes any word as input without any space.
    cout<<"Your word is: "<<sentense<<endl;
return 0;
}