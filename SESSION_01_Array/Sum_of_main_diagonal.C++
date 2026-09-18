#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int matA[10][10];
    int main_diag_sum = 0;
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

    for (int i = 0; i < row1; i++)
    {
        main_diag_sum += matA[i][i];
    }

    cout << "Sum of main diagonal: " << main_diag_sum << "\n";

    return 0;
}