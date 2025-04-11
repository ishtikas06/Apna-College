#include <iostream>
using namespace std;

/*n = 4
A
B C
D E F
G H I J
*/
int main() {
    int n ;
    cout<<"Enter the size of pattern: ";
    cin>>n;
    char a = 'A';
    cout<<endl;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            // cout<<a<<" ";
            // a = a+1;
            cout<<a++<<" ";
        }
        cout<<endl;
    }
return 0;
}