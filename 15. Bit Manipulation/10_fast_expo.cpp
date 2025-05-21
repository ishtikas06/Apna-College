#include <iostream>
using namespace std;

void fastExpo(int num, int pow)
{
    int ans = 1;

    while (pow > 0)
    {
        int lastBit = pow & 1;
        if (lastBit)
        {
            ans = ans * num;
        }
        num = num * num;
        pow = pow>>1;
    }
    cout<<ans<<endl;
}

int main() {
    int num = 3, pow = 4;
    fastExpo(num, pow);
return 0;
}