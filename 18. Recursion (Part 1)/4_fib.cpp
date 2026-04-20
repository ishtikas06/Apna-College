#include <iostream>
using namespace std;

//nth fibonacci digit
int fibN(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    return fibN(n-1) + fibN(n-2);
    
}

int main() {
cout<<fibN(5)<<endl;
return 0;
}