#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int matA[10][10];
    int matB[10][10];
    int prod[10][10];
    int row1, row2, col1, col2;

    cout << "Enter dimension of Mat R(A) = ";
    cin >> row1;
    cout << "Enter dimension of Mat C(A) = ";
    cin >> col1;
    cout << "Enter dimension of Mat R(B) = ";
    cin >> row2;
    cout << "Enter dimension of Mat C(B) = ";
    cin >> col2;

    if (col1 != row2)
    {
        cout << "Error\n";

        return 0;
    }

    cout << "Give matA elements: ";
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> matA[i][j];
        }
    }
    cout << "Give matB elements: ";
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> matB[i][j];
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            prod[i][j] = 0;

            for (int k = 0; k < col1; k++)
            {
                prod[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }

    cout << "Result: \n";
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << prod[i][j] << " ";
        }

        cout << "\n";
    }

    return 0;
}