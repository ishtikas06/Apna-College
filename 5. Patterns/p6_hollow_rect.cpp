#include <iostream>
using namespace std;

/* n=4
* * * * *
*       *
*       *
* * * * *
*/
int main() {
    int n ;
    cout<<"Enter the size of pattern: ";
    cin>>n;
    cout<<endl;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n+1; j++)
        {
            if(i == 1 || i == n) // prints only 1st and last row.
            {
                cout<<"* ";
            }
            else {
                if(j == 1 || j == n+1) // prints inside rows at only 1st and last column
                {
                    cout<<"* ";  
                }
                else
                {
                    cout<<"  "; // prints everywhere else
                }
            }
        }
        cout<<endl;
    }
return 0;
}