#include <iostream>
#include <vector>
using namespace std;

int lastOcc(vector<int> arr, int target, int i)
{
    if(i < 0){
        return -1;
    }
    if(arr[i] == target){
        return i;
    }
    return lastOcc(arr, target, i-1);
}

int main() {
vector<int> arr = {1,2,3,3,3,4};
cout<<lastOcc(arr, 3, (arr.size()-1)); //4
return 0;
}