#include <iostream>
#include <vector>
using namespace std;

int partition(int arr[], int si, int ei){
    int i = si - 1;
    int pivot = arr[ei];

    for (int j = si; j < ei; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    i++;
    swap(arr[i], arr[ei]);
    // pivot index is i

    return i;
}

void quick_sort(int arr[], int si, int ei){
    if(si >= ei){
        return;
    }

    int pivot_idx = partition(arr, si, ei);

    quick_sort(arr, si, pivot_idx - 1);
    quick_sort(arr, pivot_idx + 1, ei);
}

void printArr(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[6] = {6,3,7,5,2,4};
    int n = sizeof(arr)/4;
    quick_sort(arr, 0, n-1);
    printArr(arr, n);
return 0;
}

