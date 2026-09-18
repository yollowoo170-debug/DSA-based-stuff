#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll s_up_sp_diag(ll a[][99], ll r)
{
    ll s = 0;

    for (int i = 0; i < r - 1; i++)
    {
        s += a[i][i + 1];
    }
    return s;
}

int main(void)
{
    ll sq_mat[99][99], row, col;

    cout << "Enter dimension of Mat R(A) = ";
    cin >> row;
    cout << "Enter dimension of Mat C(A) = ";
    cin >> col;

    cout << "Give matA elements: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> sq_mat[i][j];
        }
    }

    ll sum_of_up_supDiag = s_up_sp_diag(sq_mat, row);

    cout << "Sum of upper super Diagonal: ";
    cout << sum_of_up_supDiag;

    return 0;
}