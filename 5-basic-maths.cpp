#include <bits/stdc++.h>
using namespace std;

int minuscounter(int n);
int pluscounter(int n);
int reversenumber(int n);
int palendrome(int n);
int amstronenumber(int n);
int devisor(int n);
int frimenum(int n);
void findhcf();

int main()
{

    int n, count = 0;
    cout << "enter the (N). ";
    cin >> n;

    if (n < 0)
    {
        int plus = +n;
        minuscounter(n);
    }

    else if (n > 0)
    {
        pluscounter(n);
    }

    else if (n == 0)
    {
        cout << "you entered (0)";
    }
    else
    {
        cout << "ststement fault !" << endl;
    }

    // another way to calculate digit in a big number

    int value = (int)(log10(n) + 1);
    cout << "value is = " << value << endl;

    // reverse number printing

    reversenumber(n);

    // find  palandrome number

    palendrome(n);

    // find amstrone number

    amstronenumber(n);

    // find all devisior of a number

    devisor(n);

    // find prime number

    frimenum(n);

    // HCF find formula

    findhcf();

    return 0;
}

//               ( functions )

int minuscounter(int n)
{
    int lastnum, count = 0;

    while (n < 0)
    {
        lastnum = -(n % 10);
        n = n / 10;
        count++;
        cout << "valurs = " << -lastnum << endl;
    }
    cout << "total number you entered = " << count << endl;
}

int pluscounter(int n)
{
    int count = 0;
    while (n > 0)
    {
        int remender = n % 10;
        cout << "extration of number is = " << remender << endl;
        n = n / 10;
        count++;
    }
    cout << "you entered digits is = " << count << endl;
}

//            ( reverse number print function )

int reversenumber(int n)
{
    int lastdigit, reversenumber = 0;
    while (n > 0)
    {
        lastdigit = n % 10;
        n = n / 10;
        reversenumber = (reversenumber * 10) + lastdigit;
    }
    cout << "reverse of a given number is = " << reversenumber << endl
         << endl;
}

// (function to find given number is palendrome or not)

int palendrome(int n)
{
    int lastnum, reverse = 0;
    int x = n;

    while (n > 0)
    {
        lastnum = n % 10;
        reverse = (reverse * 10) + lastnum;
        n = n / 10;
    }

    if (reverse == x)
    {
        cout << "entered number is palodrome = " << reverse << endl;
    }
    else
    {
        cout << "entered number is not palodrome ! " << endl;
    }
}

// function to find amstrone number

int amstronenumber(int n)
{
    int lastn, stored, sum = 0;
    int x = n;

    while (n > 0)
    {
        lastn = n % 10;
        sum = sum + (lastn * lastn * lastn);
        n = n / 10;
    }

    if (sum == x)
    {
        cout << "entered number is armstrome = " << sum << endl;
    }
    else
    {
        cout << "number is not armstrone" << endl;
    }
}

int devisor(int n)
{
    // int dev;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << " " << i;
        }
    }
    cout << endl
         << endl;
}

int frimenum(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "this number is prime number" << endl;
    }
    else
    {
        cout << "entered number is not a prime number" << endl;
    }
}

void findhcf()
{
    
}