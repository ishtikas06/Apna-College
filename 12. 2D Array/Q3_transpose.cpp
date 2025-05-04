#include <iostream>
using namespace std;

int main() {
    int n = 2, m = 3;
    int arr[2][3]={{4,7,8},{8,8,7}};
    int transpose[m][n] = {{0}};
    

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
return 0;
}