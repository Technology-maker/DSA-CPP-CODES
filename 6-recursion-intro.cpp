// #include <bits/stdc++.h>
// using namespace std;

// int namefun(int name, int i);
// int countrecursion(int x);

// int main()
// {
//     int name, i = 0, store;
//     cout << "how many times to print your name . ";
//     cin >> name;
//     i = name;
//     // namefun(name, i);

//     // counting function

//     // countrecursion(name);

//     // sumision function

// }

// int namefun(int x, int i)
// {

//     if (i < 1)
//     {
//         return 0;
//     }

//     cout << "satender yadav" << i << endl;
//     i--;
//     namefun(x, i);
// }

// // counting function defination

// int countrecursion(int x)
// {
//     if (x < 1)
//     {
//         return 0;
//     }

//     countrecursion(x - 1);

//     cout << x << endl;
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
//
//

// void ptrfun(int arr[],int n);
// int rev(int i, int arr[], int n)
// {
//     if (i >= n / 2)
//     {
//         return 0;
//     }

//     swap(arr[i], arr[n - 1 - i]);

//     rev(i + 1, arr, n);
// }
// int main()
// {
//     int n;
//     cout << "size of array. ";
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     rev(0, arr, n);

//     ptrfun(arr, n);
// }

// void ptrfun(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << endl;
//     }
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

// fibonachi sequence with the help of recursion.

#include <bits/stdc++.h>
using namespace std;

int fibo(int n, int f1, int f2, int temp);

int main()
{
    int f1 = 0, f2 = 1, n, temp;
    cout << "enter the number. ";
    cin >> n;

    cout << f1 << " " << f2;

    fibo(n, f1, f2, temp);
}

int fibo(int n, int f1, int f2, int temp)
{
    if (n != 0)
    {

        temp = f1 + f2;
        cout << " " << temp;
        f1 = f2;
        f2 = temp;
        n--;
        return fibo(n, f1, f2, temp);
    }
}