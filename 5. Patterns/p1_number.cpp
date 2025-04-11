#include <iostream>
using namespace std;

/* n = 4
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
*/
int main() {
    int n ;
    cout<<"Enter the size of pattern: ";
    cin>>n;
    cout<<endl;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
return 0;
}