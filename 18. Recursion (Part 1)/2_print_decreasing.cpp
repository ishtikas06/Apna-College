#include <iostream>
using namespace std;

void printDecreasing(int n){
    if (n == 1)
    {
        cout<< n;;
    }
    else 
    {
        cout<< n <<"\t";
        printDecreasing(n-1);
    }
}

int main() {
printDecreasing(10);
return 0;
}