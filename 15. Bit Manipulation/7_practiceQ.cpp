#include <iostream>
using namespace std;

int updateIthBit(int num, int i, int val) {
    if (val == 1) {
        return (num | (1 << i)); // set ith bit to 1
    } else {
        return (num & ~(1 << i)); // set ith bit to 0
    }
}

int main() {
    int num = 7, i = 3, val = 1;
    cout << "Original number: " << num << endl;
    cout << "Updating the " << i << "th bit to " << val << endl;
    int updatedNum = updateIthBit(num, i, val);
    cout << "Updated number: " << updatedNum << endl;
return 0;
}