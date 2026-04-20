#include <iostream>
#include <vector>
using namespace std;

vector<int> allOcc(vector<int> arr, int key, int i, int n)
{
    vector<int> ans;
    if(i == n) 
    {
        return ans;
    }

    if(arr[i] == key)
    {
        ans.insert(key);
        return allOcc(arr, key, i+1, n);
    }

}

int main() {

return 0;
}