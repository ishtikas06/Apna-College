#include <iostream>
using namespace std;

/*
   *
  * *
 *   *
*     *
*     *
 *   *
  * *
   *    
*/

int main() {
    int n = 4;
    for (int i = 1; i <= n; i++) //Upper half of triangle
    {
        for (int j = 1; j <= n-i; j++) // space
        {
            cout<<" ";
        }
        for(int j = 1; j <= 1; j++) // star
        {
            cout<<"*";
        }
        if (i != 1)
        {
            for (int j = 1; j <= 2*(i-1)-1; j++) // space
        {
            cout<<" ";
        }
        for(int j = 1; j <= 1; j++) // star
        {
            cout<<"*";
        }
        }
        cout<<endl;
    }
    for (int i = n; i > 0; i--) //Lower half of triangle
    {
        for (int j = 1; j <= n-i; j++) // space
        {
            cout<<" ";
        }
        for(int j = 1; j <= 1; j++) // star
        {
            cout<<"*";
        }
        if (i != 1)
        {
            for (int j = 1; j <= 2*(i-1)-1; j++) // space
        {
            cout<<" ";
        }
        for(int j = 1; j <= 1; j++) // star
        {
            cout<<"*";
        }
        }
        cout<<endl;
    }

return 0;
}