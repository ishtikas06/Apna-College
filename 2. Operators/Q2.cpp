#include <iostream>
using namespace std;

int main() {
    int x=10,y=5;
    int exp1=(y*(x/y+x/y));
    int exp2=(y*x/y+y*x/y);
    cout<<exp1<<","; //20
    cout<<exp2<<"\n"; //20
return 0;
}