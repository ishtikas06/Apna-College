#include <iostream>
using namespace std;

int pairFriend(int n)
{
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }
    
    //single
    int ans1 = pairFriend(n-1);

    //pair
    int ans2 = (n-1)*pairFriend(n-2);

    return ans1 + ans2;
}

int main() {
cout<<pairFriend(4)<<endl;
return 0;
}