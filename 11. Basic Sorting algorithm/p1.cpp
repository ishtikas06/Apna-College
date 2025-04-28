#include <iostream>
using namespace std;

void print(char *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void insertionsort(char *arr, int n) // O(n^2)
{
    for(int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i -1 ;
        while(prev >= 0 && arr[prev] > curr)
        {
            swap(arr[prev], arr[prev+1]);
            prev --;
        }

    }

    print(arr, n);
}

int main() {
    char arr[5] = {'e', 'o', 'a', 'i', 'u'};
    int n = sizeof(arr)/sizeof(char);
    insertionsort(arr, n);
return 0;
}