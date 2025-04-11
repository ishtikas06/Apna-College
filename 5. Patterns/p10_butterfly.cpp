#include <iostream>
using namespace std;

/*
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
*/
int main() {
    int n = 5;
    // cout<<"Enter the size of pattern: ";
    // cin>>n;
    cout<<endl;

    for (int i = 1; i <= n; i++) //Outer loop runs the total number of row times
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <= 2*n-(2*i); j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    // for (int i = 1; i <= n; i++) //Outer loop runs the total number of row times
    // {
    //     for (int j = n+1-i; j > 0; j--)
    //     {
    //         cout<<"*";
    //     }
    //     for (int j = 0; j < 2*i-2; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = n+1-i; j > 0; j--)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<"\n";
    // }
    for (int i = n; i > 0; i--) //Outer loop runs the total number of row times
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <= 2*n-(2*i); j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

return 0;
}