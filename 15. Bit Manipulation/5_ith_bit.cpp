#include <iostream>
using namespace std;

int getIthBit(int num, int i) {
    if(num & (1 << i)) {
        return 1; // ith bit is 1
    } else {
        return 0; // ith bit is 0
    }
}

int setIthBit(int num, int i) {
    return (num | (1 << i)); // set ith bit to 1
}

int clearIthBit(int num, int i) {
    return (num & ~(1 << i)); // clear ith bit to 0
}

int main() {
    int num = 6, i = 1;
    cout<<"The " << i << "th bit of " << num << " is: " << getIthBit(num, i) << endl;
    // cout<<"After setting the " << i << "th bit of " << num << ", the number is: " << setIthBit(num, i) << endl;
    cout<<"After clearing the " << i << "th bit of " << num << ", the number is: " << clearIthBit(num, i) << endl;
return 0;
}