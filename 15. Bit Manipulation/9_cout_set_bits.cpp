#include <iostream>
using namespace std;

int countSetBits(int num)
{
    int count = 0;
    while(num > 0)
    {
        int curr;
        curr = num & 1;
        count += curr;
        num = num>>1;
    }
    return count;
}

int main() {
    int num = 10;
    cout<<countSetBits(num)<<endl;
return 0;
}