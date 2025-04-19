#include <iostream>
using namespace std;

int main() {
    int arr[50]; // allocate 50 storage space in memory

    int arr2[20] = {1,2,3}; // alocate 20 space in memory and stor 1, 2 and 3 on first 3 index AND rest elements will be 0.
    
    int arr3[] = {1,2,3}; // created a 3 sized array having 1, 2 and 3

    cout<<arr[5]<<endl; // any random garbage value

    cout<<arr3[4]<<endl;

return 0;
}