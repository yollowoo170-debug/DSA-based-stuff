#include <bits/stdc++.h>
using namespace std;

void trps(int m[][99], int t[][99], int r, int c)
{

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            t[j][i] = m[i][j];
        }
    }
}

int main(void)
{
    int mat[99][99], tns[99][99], row, col;

    cout << "Enter Row: ";
    cin >> row;
    cout << "Enter Col: ";
    cin >> col;
    cout << "Enter Matrix: " << "\n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }

    trps(mat, tns, row, col);

    cout << "Transposed Array: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << tns[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}