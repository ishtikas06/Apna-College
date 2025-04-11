#include <iostream>
using namespace std;

/*
1
2 3
4 5 6
7 8 9 10
*/
int main() {
    int n ;
    cout<<"Enter the size of pattern: ";
    cin>>n;
    cout<<endl;
    int start = 1;

    for (int i = 1; i <= n; i++) //Outer loop runs the total number of row times
    {
        for (int j = 1; j <= i; j++) //Here, the inner loop is running the row times.
        {
            cout<<start++<<" ";
        }
        cout<<endl;
    }
return 0;
}