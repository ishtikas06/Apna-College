#include <iostream>
#include <vector>
using namespace std;

int search(int arr[], int si, int ei, int target)
{
    if (si > ei)
    {
        return -1;
    }

    int mid = si + (ei -si)/2;
    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[si] <= arr[mid])
    {
        // Line 1
        if (arr[si] <= target && target <= arr[mid]) 
        {
            search(arr, si, mid-1, target); // left half
        }
        else 
        {
            search(arr, mid+1, ei, target);
        }
    }
    else 
    {
        // Line 2
        if (arr[mid] <= target && target <= arr[ei])
        {
            search(arr, mid+1, ei, target);
        }
        else
        {
            search(arr, si, mid-1, target);
        }
    }
}

int main() {
    int arr[7] = {4,5,6,7,0,1,2};
    int n = 7;

    cout<<"Index: "<<search(arr, 0, n-1, 8)<<endl;
return 0;
}