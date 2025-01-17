//   //           bubble short algorithm

// #include <bits/stdc++.h>
// using namespace std;

// int shorting(vector<int> &arr);

// int main()
// {
//     vector<int> arr = {5, 3, 4, 6, 8, 10, 35, 2, 34, 100, 290};

//     // passing vector in function.

//     shorting(arr);

//     // printing the array vector element in shortin order

//     cout << "size = " << arr.size() << endl;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << "element = " << arr[i] << endl;
//     }
// }

// int shorting(vector<int> &arr)
// {
//     for (int i = 0; i < arr.size() - 1; i++)
//     {
//         for (int j = 0; j < arr.size() - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
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
//
//
//

// insertion short algorithm.

#include <bits/stdc++.h>
using namespace std;

void insertion_short(vector<int> &arr);
int main()
{
    vector<int> arr = {83, 5, 3, 355, 7, 8, 55, 43, 56, 78, 6, 444, 34, 76};

    insertion_short(arr);

    return 0;
}

void insertion_short(vector<int> &arr)
{

    int length = arr.size();
    for (int i = 1; i < length; i++)
    {
        int minni = i;
        for (int j = length - i; j <= 0; j--)
        {
            if (arr[i] < arr[minni])
            {
                minni = j;
            }
        }
    }
}