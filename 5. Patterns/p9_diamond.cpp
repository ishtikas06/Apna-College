#include <iostream>
using namespace std;

/*n=6
  *
 ***
*****
*****
 ***
  *
*/
int main() {
    int n = 8;
    // cout<<"Enter the size of pattern: ";
    // cin>>n;
    cout<<endl;
    int k = n/2;

    for (int i = 1; i <= k; i++) //first triange
    {
        for (int j = 1; j <= k-i; j++) //spaces
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <= i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = 1; i <= k; i++) //inverted triangle
    {
        for (int j = 1; j <= i-1; j++) //spaces
        {
            cout<<" ";
        }
        for (int j = 1; j <= k-i+1; j++) 
        {
            cout<<"*";
        }
        for (int j = 1; j <= k-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

return 0;
}