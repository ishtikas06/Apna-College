#include <iostream>
#include <vector>
using namespace std;
// 2 pointer approach to solve pair sum.

vector<int> pairSum(vector<int> arr, int target)
{
    int st = 0, end = arr.size() - 1;
    int CurSum = 0;
    vector<int> ans;
    while(st < end)
    {
        CurSum = arr[st] + arr[end];
        if(CurSum == target)
        {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if (CurSum > target)
        {
            end--;
        }
        else{
            st++;
        }
    }
    return ans;
}

int main() {
    vector<int> vec = {2,7,11,15};
    int target = 9;

    vector<int> sol = pairSum(vec, target);
    cout<<sol[0]<<","<<sol[1];
return 0;
}