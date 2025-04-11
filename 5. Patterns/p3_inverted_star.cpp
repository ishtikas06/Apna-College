#include <iostream>
using namespace std;

/* n = 4
* * * *
* * *
* *
*
*/
int main() {
    int n ;
    cout<<"Enter the size of pattern: ";
    cin>>n;
    cout<<endl;

    for (int i = 1; i <= n; i++) // outer loop number of row times works kar rha hai.
    {
        for (int j = n+1-i; j >= 1; j--) // inner loop reverse me ho rha h 4,3,2,1. 4 = n, 3 = n-1... so, general trend is (n + 1 - i)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
return 0;
}