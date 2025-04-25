#include <iostream>
using namespace std;

bool duplicate(int *nums, int n)
{
    for(int i = 1; i < n; i++)
    {
        if (nums[i-1] == nums[i])
        {
            return true;
        }
        
    }
    return false;
}


int main() {
    int nums[10] = {1,1,1,3,3,4,3,2,4,2};
    int n = sizeof(nums)/sizeof(int);

    //sorting
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if (nums[i] > nums[j])
            {
                swap(nums[i], nums[j]);
            }
        }
    }
    
    // for(int i = 0; i < n; i++){
    //     cout<<nums[i]<<" ";
    // }
    // cout<<"\n";
    cout<<duplicate(nums, n);
return 0;
}