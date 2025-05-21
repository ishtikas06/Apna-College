#include <iostream>
#include <vector>
using namespace std;

vector<int> findDupeAndMiss(vector<int> arr)
{
    int n = arr.size();
    vector<int> count(n+1,0);

    for(int i = 0; i < arr.size(); i++)
    {
        count[arr[i]]++;
    }
    int dupe = -1, miss = -1;
    for(int i = 1; i < arr.size()+1; i++)
    {
        if(count[i] == 0 )
        {
            miss = i;
        }
        if(count[i] == 2 )
        {
            dupe = i;
        }
    }
    return {dupe,miss};
}

int main() {
    vector<int> arr = {1,2,2,4};
    vector<int> ans = findDupeAndMiss(arr);
    
    cout<<ans[0]<<","<<ans[1];
return 0;
}