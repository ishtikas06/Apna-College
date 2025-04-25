#include <iostream>
using namespace std;

void maxSubarraySum(int arr[], int n) //O(n^3)
{
    int maxSum = INT_MIN; // -infinity. These are predefined MACROS in C++
    // INT_MAX = +infinity
    for(int start = 0; start < n; start++) //O(n)
    {
        for(int end = start; end < n; end++) //O(n)
        {
            int currsum = 0;
            for(int i = start; i <= end; i++) //O(n)
            {
                currsum += arr[i];
            }
            cout<<currsum<<", ";
            maxSum = max(currsum, maxSum);
        }
        cout<<"\n";
    }
    cout<<"The maximum subarray sum = "<<maxSum<<"\n";
}

int main() {
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    maxSubarraySum(arr, n);
return 0;
}