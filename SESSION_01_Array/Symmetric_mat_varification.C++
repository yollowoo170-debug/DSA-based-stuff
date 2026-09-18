#include <bits/stdc++.h>
using namespace std;

bool varifier(int m[][99], int r, int c)
{

    if (r != c)
    {
        return false;
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = i + 1; j < c; j++)
        {
            if (m[i][j] != m[j][i])
            {
                return false;
            }
        }
    }

    return true;
}

int main(void)
{
    int mat[99][99], row, col;

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

    if (varifier(mat, row, col))
    {
        cout << "It is a symmetric matrix\n";
    }
    else
    {
        cout << "It is not a symmetric matrix\n";
    }
}