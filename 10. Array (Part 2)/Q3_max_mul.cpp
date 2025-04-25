#include <iostream>
using namespace std;

int maxProduct(vector<int> & nums)
{
    int maxTillNow=nums[0];int minTillNow=nums[0];int ans=maxTillNow;
    for(int i = 1; i < nums.size(); i++)
    {
        int curr = nums[i];
        int tempMaxTillNow = max(curr, max(maxTillNow * curr, minTillNow * curr));
        minTillNow = min(curr, min(maxTillNow * curr, minTillNow * curr));
        maxTillNow = tempMaxTillNow;
        ans = max(maxTillNow,ans);
    }
    return ans;
}

int main() {
    int muns[4] = {2,-2,4,0};
    maxProduct(nums);

return 0;
}