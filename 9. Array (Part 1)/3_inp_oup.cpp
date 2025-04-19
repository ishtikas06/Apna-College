#include <iostream>
using namespace std;

int main() {

    /* Dynamic allocation not allowed in older verson of c++
    int n;
    cout<<"Enter length of array: ";
    cin>>n;
    int arr[n]; */ 

    int arr[5];
    int n = sizeof(arr)/sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    
return 0;
}