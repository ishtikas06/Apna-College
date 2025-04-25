#include <iostream>
using namespace std;

void maxSubarraySum(int arr[], int n) //O(n^2)
{
    int maxSum = INT_MIN; // -infinity.
    for(int start = 0; start < n; start++) //O(n)
    {   
        int currsum = 0;
        for(int end = start; end < n; end++) //O(n)
        {
            currsum += arr[end];
            maxSum = max(currsum, maxSum);
        }
    }
    cout<<"The maximum subarray sum = "<<maxSum<<"\n";
}

int main() {
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    maxSubarraySum(arr, n);
return 0;
}