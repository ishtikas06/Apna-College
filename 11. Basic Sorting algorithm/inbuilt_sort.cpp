#include <iostream>
#include <algorithm> //to access the sort function
using namespace std;

void print(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main() {
    int arr[8] = {1,4,1,3,2,4,3,7};
    int n = sizeof(arr)/sizeof(int);
    sort(arr, arr+8);
    print(arr, n);
return 0;
}