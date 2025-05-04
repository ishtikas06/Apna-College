#include <iostream>
using namespace std;

int diagonalSum(int mat[][3], int n, int m)
{
    int tSum = 0;

    // for (int i = 0; i < n; i++) // O(n^2)
    // {
    //     for(int j = 0; j < m; j++)
    //     {
    //         if(i == j) // Primary diagonal
    //         {
    //             tSum += mat[i][j];
    //         }
    //         else if (j == n-i-1) // Seconday diagonal
    //         {
    //             tSum += mat[i][j];
    //         }
    //     }
    // }

    for(int i = 0; i < n; i++) // O(n)
    {
        tSum += mat[i][i];
        if(i != n-i-1)
        {
            tSum += mat[i][n-i-1];
        }
    }
    
    return tSum;
}

int main() {
    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};
    
    int matrix2[3][3] = {{1,2,3},
                         {4,5,6},
                         {7,8,9}};

    cout<<diagonalSum(matrix2, 3, 3)<<endl;
return 0;
}