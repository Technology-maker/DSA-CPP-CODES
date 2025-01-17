#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 2 * (5 - i) - 1; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int k = 0; k < 2 * i + 1; k++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    // int row;
    // cout << "enter row value. ";
    // cin >> row;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < row - i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //

    int row;
    cout << "enter row value. ";
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < row - i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}