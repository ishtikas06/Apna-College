#include <iostream>
using namespace std;

void searchSorted(int mat[][4], int n, int m, int k) // O(n^2)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(mat[i][j] == k)
            {
                cout<<"Location of "<<k<<" is: "<<i<<","<<j;
            }
        }
    }
}

int main() {
    int matrix[4][4] = {{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,49},
                        {32,33,39,50}};

    int k = 33;

    searchSorted(matrix, 4, 4, k);
return 0;
}