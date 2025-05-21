#include <iostream>
using namespace std;

int main() {
    // Bitwise AND
    /*
    3 -> 0011
    5 -> 0101
    7 -> 0111
    3 & 5 -> 0011 & 0101 = 0001
    3 & 7 -> 0011 & 0111 = 0011
    */
    cout<<(3 & 5) << endl; // 1
    cout<<(3 & 7) << endl; // 3

    // Bitwise OR
    /*
    3 -> 0011   
    5 -> 0101
    7 -> 0111
    3 | 5 -> 0011 | 0101 = 0111
    3 | 7 -> 0011 | 0111 = 0111
    */
    cout<<(3 | 5) << endl; // 7
    cout<<(3 | 7) << endl; // 7

    // Bitwise XOR
    /*
    3 -> 0011
    5 -> 0101
    7 -> 0111
    3 ^ 5 -> 0011 ^ 0101 = 0110
    3 ^ 7 -> 0011 ^ 0111 = 0100
    */
    cout<<(3 ^ 5) << endl; // 6
    cout<<(3 ^ 7) << endl; // 4
return 0;
}