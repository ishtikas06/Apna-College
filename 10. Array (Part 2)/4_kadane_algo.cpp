#include <iostream>
using namespace std;

void maxSubarraySum(int arr[], int n) //O(n)
{
    int maxSum = INT_MIN; 
    int currsum = 0;
    for(int i = 0; i < n; i++) //O(n)
    {   
        currsum += arr[i];
        maxSum = max(currsum, maxSum);
        if(currsum < 0)
        {
            currsum = 0;
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