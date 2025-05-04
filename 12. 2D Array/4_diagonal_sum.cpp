#include <iostream>
using namespace std;

int diagonalSum(int mat[][3], int n, int m)
{
    int pSum = 0, sSum = 0;
    int tSum = 0;

    if (n % 2 == 0) 
    {
        for (int i = 0; i < n; i++) // Primary diagonal
        {
            for(int j = 0; j < m; j++)
            {
                if(i == j)
                {
                    pSum += mat[i][j];
                }
            }
        }
        for (int i = 0; i < n; i++) // Secondary diagonal
        {
            for(int j = 0; j < m; j++)
            {
                if(i + j == n-1)
                {
                    sSum += mat[i][j];
                }
            }
        }
        tSum = pSum + sSum;
    }

    else
    {
        for (int i = 0; i < n; i++) // Primary diagonal
        {
            for(int j = 0; j < m; j++)
            {
                if(i == j)
                {
                    pSum += mat[i][j];
                }
            }
        }
        for (int i = 0; i < n; i++) // Secondary diagonal
        {
            for(int j = 0; j < m; j++)
            {
                if(i + j == n-1)
                {
                    sSum += mat[i][j];
                }
            }
        }
        tSum = pSum + sSum - mat[n/2][m/2];
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