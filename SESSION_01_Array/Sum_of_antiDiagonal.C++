#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll s_antiDiag(ll a[][99], ll r, ll c)
{
    ll i, j, s = 0;

    for (i = 0; i < r; i++)
    {
        j = r - 1 - i;
        s += a[i][j];
    }

    return s;
}

int main(void)
{
    ll mat[99][99], anti_diag_sum, row, col, i, j;

    cout << "Enter dimension of Mat R(A) = ";
    cin >> row;
    cout << "Enter dimension of Mat C(A) = ";
    cin >> col;
    cout << "Give matA elements: ";

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }

    anti_diag_sum = s_antiDiag(mat, row, col);

    cout << "Sum of Anti Diagonal: ";
    cout << anti_diag_sum;

    return 0;
}