#include <bits/stdc++.h>
using namespace std;
void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl
         << endl
         << endl;
}
void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl
         << endl;
}
void pattern3(int n)
{
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
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

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl
         << endl
         << endl;
}
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl
         << endl
         << endl;
}
void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 1; k < i + 2; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl
         << endl
         << endl;
}
void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= n - i + 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl
         << endl
         << endl;
}
void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern8(int n)
{
    int star = 1;

    for (int i = 0; i < n; i++)
    {

        if (i % 2 == 0)
            star = 0;
        else
            star = 1;

        for (int j = 0; j <= i; j++)
        {
            cout << star << " ";
            star = 1 - star;
        }

        cout << endl;
    }
}
void pattern9(int n)
{
    int space = 2 * (n - 1);
    // numbers
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        // space

        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }

        // number

        for (int k = 1; k <= i; k++)
        {
            cout << " *";
        }

        cout << endl;
        space -= 2;
    }
}
void pattern10(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}
void pattern11(int n)
{
    char counter = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << counter << " ";
            counter++;
        }
        cout << endl;
    }
}
void pattern12(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern13(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + n - i - 1; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern14(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
        }
        cout << endl;
        ch++;
    }
}
void pattern15(int n)
{
    // this is not work properly

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }

        // character

        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch << " ";
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }
        cout << endl;
    }
}
void pattern16(int n)
{
    char ch = 'E';
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }

        cout << endl;
    }
}
void pattern17(int n)
{
    int space = 0;
    for (int i = 0; i < n; i++)
    {

        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        // spaces

        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        space += 2;

        // stars

        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    int sp = (2 * n) - 2;
    for (int i = 0; i < n; i++)
    {
        // star

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < sp; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        sp--;
        sp--;
    }
}
void pattern18(int n)
{
    
}
//
//
//

int main()
{
    int n;
    cin >> n;

    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern9(n);
    // pattern10(n);
    // pattern11(n);
    // pattern12(n);
    // pattern13(n);
    // pattern14(n);
    // pattern15(n);
    // pattern16(n);
    // pattern17(n);
    pattern18(n);

    return 0;
}
