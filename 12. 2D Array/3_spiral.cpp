#include <iostream>
using namespace std;

void spiralMatrix (int mat[][3], int m, int n) // while passing a 2D arra in a function we must enter the value of column
{
    int srow = 0, scol = 0, erow = m-1, ecol = n-1;
    while (srow <= erow && scol <= ecol)

    {
        //top
        for(int j = scol; j <= ecol; j++)
        {
            cout<<mat[srow][j]<<" ";
        }
        //right
        for(int i = srow+1; i <= erow; i++)
        {
            cout<<mat[i][ecol]<<" ";
        }
        //bottom
        for(int j = ecol-1; j >= scol; j--)
        {
            if (srow == erow)
            {
                break;
            }
            cout<<mat[erow][j]<<" ";
        }
        //left
        for(int i = erow-1; i >= srow+1; i--)
        {
            if (scol == ecol)
            {
                break;
            }
            cout<<mat[i][scol]<<" ";
        }
        srow++;
        scol++;
        erow--;
        ecol--;
    }
}

int main() {
    int matrix[5][3] = { {1,2,3},
                         {5,6,7},
                         {9,10,11},
                         {13,14,15},
                         {17,18,19} };

    spiralMatrix(matrix, 5, 3);
return 0;
}