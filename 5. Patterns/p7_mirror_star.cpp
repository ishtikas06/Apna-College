#include <iostream>
using namespace std;

/*
   *
  **
 ***
****
*/
int main() {
    int n ;
    cout<<"Enter the size of pattern: ";
    cin>>n;
    cout<<endl;

    for (int i = 1; i <= n; i++) //Outer loop runs the total number of row times
    {
        for (int j = 1; j <= n-i; j++) //Here, the inner loop is running the row times.
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