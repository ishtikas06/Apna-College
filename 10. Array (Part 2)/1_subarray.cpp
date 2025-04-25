#include <iostream>
using namespace std;

/*
array = [1,2,3]
subarray is CONTINOUS
subarray = [1], [1,2], [1,2,3], [2], [2,3], [3]
*/
/*
array = [1,2,3]
subsequencw can be NON-CONTINOUS
subarray = [1,3], [2] etc
*/

void printSubarray (int arr[], int n) //O(n^3)
{
    for(int start = 0; start < n; start++)
    {
        for(int end = start; end < n; end++)
        {
            //cout<<"("<<i<<","<<j<<") ";
            for(int i = start; i <= end; i++)
            {
                cout<<arr[i];
            }
            cout<<", ";
        }
        cout<<"\n";
    }
}

int main() {
     int arr [] = {0,1,2,3,4};
     int n = sizeof(arr)/sizeof(int);

     printSubarray(arr, n);
return 0;
}