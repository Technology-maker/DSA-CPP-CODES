// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int reverse = 0;
//     while (n > 0)
//     {
//         int id = n % 10;
//         reverse = (reverse * 10) + id;
//         n = n / 10;
//     }
//     cout << "revnum is = " << reverse;
//     return 0;
// }
//
//
//
//
//
//
//
//
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // initlization of variable

//     int n, sum = 0, lastnumber;
//     cin >> n;
//     int duplicate = n;

//     // Check if the number is an Armstrong number
//     while (n > 0)
//     {
//         lastnumber = n % 10;
//         sum += lastnumber * lastnumber * lastnumber;
//         n /= 10;
//     }

//     // Displaying the result
//     if (sum == duplicate)
//     {
//         cout << duplicate << " is an Armstrong number." << endl;
//     }
//     else
//     {
//         cout << duplicate << " is not an Armstrong number." << endl;
//     }

//     return 0;
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

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, count = 0;
//     cin >> n;

//     if (n <= 1)
//     {
//         cout << "enter number is not prime. ";
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             count++;
//         }
//     }
//     if (count == 2)
//     {
//         cout << "number is prime. " << n;
//     }
//     else
//     {
//         cout << "number is not prime! " << n;
//     }

//     return 0;
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
// #include <bits/stdc++.h>
// using namespace std;

// // function declaretion
// int fun1(int n);
// int main()
// {
//     // recursion
//     int n;
//     cin >> n;

//     // function call
//     fun1(n);
// }

// // function defination
// int fun1(int n)
// {
//     if (n < 1)
//     {
//         return 1;
//     }
//     fun1(n - 1);
//     cout << n << " ";
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

// paremeterised function

// #include <bits/stdc++.h>
// using namespace std;

// // function declaretion
// int findsum(int n, int sum);
// int main()
// {
//     // recursion
//     int n;
//     cin >> n;

//     // function call
//     findsum(n, 0);
// }

// // function defination
// int findsum(int n, int sum)
// {
//     if (n < 1)
//     {
//         cout << "sum of n number is = " << sum;
//         return 0;
//     }
//     findsum(n - 1, sum + n);
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

// #include <bits/stdc++.h>
// using namespace std;

// // function declaretion
// int findsum(int n);
// int main()
// {
//     // recursion
//     int n, store;
//     cin >> n;

//     // function call
//     store = findsum(n);
//     cout << "sum of n number is = " << store;
// }

// // function defination
// int findsum(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     return n + findsum(n - 1);
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
// finding factorial by recursion

// #include <bits/stdc++.h>
// using namespace std;

// // function declaretion
// int findfactorial(int n, int fact);
// int main()
// {
//     // recursion
//     int n, fact = 1;
//     cin >> n;

//     // function call
//     findfactorial(n, fact);
// }

// // function defination

// int findfactorial(int n, int fact)
// {
//     if (n <= 1)
//     {
//         cout << "factorial of n number is. " << fact;
//         return 0;
//     }
//     findfactorial(n - 1, fact * n);
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

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     int count = 1;
//     int arr[n];
//     if (n < k){
//         return -1;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             arr[count] = i;
//             count++;
//         }
//     }
//     cout << arr[k];
//     return 0;
// }

// array revers by recursion;

// #include <bits/stdc++.h>
// using namespace std;
// int revfun(int arr[], int left, int right);
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];

//     // inserting number in array

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int left = 0, right = 9;

//     revfun(arr, left, right);
//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int revfun(int arr[], int left, int right)
// {
//     if (left >= right)
//     {
//         return 0;
//     }

//     swap(arr[left], arr[right]);
//     revfun(arr, left + 1, right - 1);
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

// #include <bits/stdc++.h>
// using namespace std;
// int revfun(int arr[], int n, int i);
// int main()
// {
//     int n, i = 0;
//     cin >> n;
//     int arr[n];

//     // inserting elements in an array
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     revfun(arr, n, i);

//     // printing of an array
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// int revfun(int arr[], int n, int i)
// {
//     if (i >= n / 2)
//     {
//         return 0;
//     }

//     swap(arr[i], arr[n - i - 1]);

//     revfun(arr, n, i + 1);
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

// string palendrome or not

// #include <bits/stdc++.h>
// using namespace std;
// int amstrome(string &str, int length, int i);
// int main()
// {
//     int i = 0;
//     string str, duplicate;
//     getline(cin, str);
//     duplicate = str;

//     int length = str.length();

//     // function
//     amstrome(str, length, i);

//     // pinting an string
//     if (duplicate == str)
//     {
//         cout << "given string is ambstrone. " << str;
//     }
//     else
//     {
//         cout << "it is not ambstrone !";
//     }

//     return 0;
// }

// // function defination
// int amstrome(string &str, int length, int i)
// {
//     if (i >= length / 2)
//     {
//         return 0;
//     }
//     swap(str[i], str[length - i - 1]);
//     amstrome(str, length, i + 1);
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
#include <bits/stdc++.h>
using namespace std;
int recfun(int n, int sum);

int main()
{
    int n, sum = 0;
    cin >> n;
    recfun(n, sum);

    return 0;
}
int recfun(int n, int sum)
{

    if (n <= 0)
    {
        cout << sum;
        return 0;
    }
    recfun(n - 1, sum + n);
    return 0;
}