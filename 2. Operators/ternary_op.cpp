#include <iostream>
using namespace std;

int main() {
    
    int a=2, b=5, c=4;
    int largest = (a > b && a > c) ? a : ((b > c) ? b : c);
    cout<<largest;
    return 0;
}