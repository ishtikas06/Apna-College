#include <iostream>
using namespace std;

void oddEven(int n) {
    // Check if the number is odd or even using bitwise AND operator
    if (n & 1) {
        cout << n << " is odd" << endl;
    } else {
        cout << n << " is even" << endl;
    }
}

int main() {
    int num = 6;
    cout << "Using bitwise operator to check if " << num << " is odd or even:" << endl;
    oddEven(num);
return 0;
}