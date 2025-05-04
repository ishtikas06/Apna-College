#include <iostream>
using namespace std;

int main() {
    int student[2][3];
    int n = sizeof(student)/sizeof(int);
    int m = sizeof(student[1])/sizeof(int);
    
    cout<<"Enter the values: "<<endl;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin>>student[i][j];
        }
    }
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<student[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<student[1][1];
return 0;
}