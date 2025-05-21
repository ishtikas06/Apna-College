#include <iostream>
using namespace std;

bool isPowerOf2(int num)
{
    if(!(num & (num-1)))
    {
        return true; // num is a power of 2
    }
    else
    {
        return false; // num is not a power of 2
    }
}

int main() {
    int num = 8;
    cout << num << " is a power of 2: " << isPowerOf2(num) << endl; // 1
return 0;
}