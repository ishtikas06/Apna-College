#include <iostream>
using namespace std;

int main() {
    int x=2,y=5;
    int exp1=(x*y/x);
    int exp2=(x*(y/x));
    cout<<exp1<<","; //5
    cout<<exp2<<"\n"; //4
return 0;
}