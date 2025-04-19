#include <iostream>
using namespace std;

int main() {
    int arr[5] = {8,6,53,5,4};
    int max = arr[0], min = arr[0];

    int n = sizeof(arr)/sizeof(int);

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout<<"Max = "<<max<<endl;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout<<"Min = "<<min<<endl;
return 0;
}