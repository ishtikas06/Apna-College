#include <iostream>
using namespace std;

void print(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void bubblesort(int *arr, int n) // O(n^2)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    print(arr, n);
}

int main() {
    int arr[5] = {5,4,3,1,2};
    int n = sizeof(arr)/sizeof(int);
    bubblesort(arr, n);
return 0;
}