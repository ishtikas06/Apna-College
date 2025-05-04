#include <iostream>
using namespace std;

void binSearchSorted(int mat[][4], int n, int m, int k) //O(nlogm)
{
    bool find = false;

    for(int i = 0; i < n; i++) 
    {
        int low = 0, high = m-1;
        while(low <= high)
        {
            int mid = (high+low)/2;
            if(k == mat[i][mid])
            {
                find = true;
                cout<<"Location of "<<k<<" is: "<<i<<","<<mid<<endl;
                break;
            }
            else if (k > mat[i][mid])
            {
                low = mid+1;
            }
            else 
            {
                high = mid-1;
            }
        }
    }
    if(!find)
    {
        cout<<k<<" not found"<<endl;
    }
}

int main() {
    int matrix[4][4] = {{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,49},
                        {32,33,39,50}};

    int k = 90;
    binSearchSorted(matrix, 4, 4, k);
return 0;
}