#include <bits/stdc++.h>
using namespace std;

bool upper_lower_trig(int mat[][10], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (i == j)
            {
                if (mat[i][j] != 1)
                {
                    return false;
                }
            }
            else
            {
                if (mat[i][j] != 0)
                {
                    return false;
                }
            }
        }
    }
    return true;
}
int main(void)
{
    int matA[10][10];

    int row1, col1;

    cout << "Enter dimension of Mat R(A) = ";
    cin >> row1;
    cout << "Enter dimension of Mat C(A) = ";
    cin >> col1;

    if (row1 != col1)
    {
        return 1;
    }

    cout << "Give matA elements: ";
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> matA[i][j];
        }
    }

    upper_lower_trig(matA, row1, col1);

    cout << "Varified!!!" << "\n";

    return 0;
}