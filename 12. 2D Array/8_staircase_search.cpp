#include <iostream>
using namespace std;

bool search(int mat[][4], int n, int m, int k) // O(n+m)
{
    bool find = false;
    int i = 0, j = m-1;

    while ( i < n && j >= 0)
    {
        if(mat[i][j] == k)
        {
            cout<<"Location of "<<k<<" is: "<<i+1<<","<<j+1<<endl;
            return true;
        }
        else if(k < mat[i][j]) //down
        {
            j--;
        }
        else //left
        {
            i++;
        }
    }
    cout<<k<<" not found"<<endl;
    return false;

}

int main() {
    int matrix[4][4] = {{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,49},
                        {32,33,39,50}};

    int k = 23;
    search(matrix, 4, 4, k);
return 0;
}