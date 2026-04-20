#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int key, int high, int low)
{
    if(low> high)
    {
        return -1;
    }
    
    int mid = (high + low)/2;
    if(key == arr[mid])
    {
        return mid;
    }
    else if (key > arr[mid])
    {
        return binarySearch(arr, key, high, mid+1);
    }
    else
    {
        return binarySearch(arr, key, mid-1, low);
    }
}

int main() {
vector<int> arr = {2,5,6,8,9,15,25};
int high = arr.size()-1, low = 0;
cout<<binarySearch(arr, 7, high, low)<<endl;
return 0;
}