// #include <bits/stdc++.h>
// using namespace std;
// vector<int> revfun(vector<int> v1, int size);
// int main()
// {
//     vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, v2;
//     int size = v1.size();

//     v2 = revfun(v1, size);

//     for (auto it : v2)
//     {
//         cout << it;
//     }

//     return 0;
// }

// vector<int> revfun(vector<int> v1, int size)
// {
//     int last = size - 1;
//     for (int i = 0; i < size / 2; i++)
//     {
//         swap(v1[i], v1[last]);
//     }

//     return v1;
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
// fibonachi number
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, f1 = 0, f2 = 1, store = 0;
//     cin >> n;
//     cout << f1 << " " << f2 << " ";
//     for (int i = 2; i < n; i++)
//     {
//         store = f1 + f2;
//         cout << store << " ";
//         f1 = f2;
//         f2 = store;
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
// int recfun(int n);

// int main()
// {
//     int n, store;
//     cin >> n;

//     store = recfun(n);
//     cout << store;
//     return 0;
// }
// int recfun(int n)
// {
//     if (n <= 1)
//     {
//         return n;
//     }
//     int first, last;
//     first = recfun(n - 1);
//     last = recfun(n - 2);
//     return first + last;
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

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, value = 0;

//     cout << "size of a array. ";
//     cin >> n;

//     int arr[n];

//     cout << "enter element of a array. ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "enter search element. ";
//     cin >> value;

//     // precomputation
//     int hash[13] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[i]] += 1;
//     }

//     cout << hash[value];

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
//     string str;
//     getline(cin, str);
//     char search;
//     cout << "search element. ";
//     cin >> search;

//     // precompute
//     int hash[256] = {0};

//     for (int i = 0; i < str.size(); i++)
//     {
//         hash[str[i]]++;
//     }
//     cout << "element appears = " << hash[search];
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
//     int n, search, store;
//     cout << "enter the size of an array. ";
//     cin >> n;
//     int arr[n];
//     unordered_map<int, int> mp;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         mp[arr[i]]++;
//     }
//     // cout << "enter searching element. ";
//     // cin >> search;

//     // store = mp[search];

//     // cout << "how many times it appears = " << store;

//     for (auto it : mp)
//     {
//         cout << it.first << " --> " << it.second << endl;
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

// selection sort

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = {1, 2, 4, 6, 87, 3, 5, 8, 9, 5, 3, 5, 6, 8};
//     for (int i = 0; i < arr.size() - 1; i++)
//     {
//         int minimum = i;
//         for (int j = i; j < arr.size(); j++)
//         {
//             if (arr[j] < arr[minimum])
//             {
//                 minimum = j;
//             }
//             swap(arr[minimum], arr[i]);
//         }
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
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
// selection sort code
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = {1, 2, 5, 9, 4, 3, 7, 9, 4, 2, 3, 8, 9, 5, 4, 5, 67, 5, 78, 6};

//     for (int i = 0; i < arr.size() - 1; i++)
//     {
//         int mini = i;
//         for (int j = i; j < arr.size(); j++)
//         {
//             if (arr[mini] > arr[j])
//             {
//                 mini = j;
//             }
//         }
//         swap(arr[mini], arr[i]);
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
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
// bubble sort code

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = {2, 1, 3, 4, 625, 2, 5783, 489, 5, 7, 865, 6, 9, 7, 6, 7, 8, 9, 7, 5, 4, 3, 3, 2, 4, 57};

//     // sorting
//     for (int i = arr.size() ; i >= 1; i--)
//     {
//         for (int j = 0; j < i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
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
//     int n;
//     cout << "enter the size of n array. ";
//     cin >> n;

//     // array
//     cout << "insert  the elements of an array. ";
//     int array[n];
//     for (int i = 0; i < n - 1; i++)
//     {
//         cin >> array[i];
//     }

//     //
//     //
//     //
//     //

//     for (int i = 1; i < n; i++)
//     {
//         int key = array[i];
//         int j = i - 1;
//         while (j >= 0 && array[j] > key)
//         {
//             swap(array[j], array[j + 1]);
//             j = j - 1;
//         }
//     }
//     //
//     //
//     //
//     //

//     for (int i = 0; i < n - 1; i++)
//     {
//         cout << array[i] << " ";
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
// remove duplicare element from an array

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = {1, 2, 2, 1, 3, 4, 5, 3, 2, 3, 5, 6, 7, 4, 3, 5, 7, 9, 98, 2, 4, 56, 78, 76, 6, 787, 6, 5, 76, 76, 76, 76, 65, 43, 43, 65, 87, 98};

//     set<int> s1;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         s1.insert(arr[i]);
//     }

//     for (auto it : s1)
//     {
//         cout << it << " ";
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
// remove duplicate element

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[20] = {1, 3, 5, 6, 6, 7, 4, 3, 6, 8, 8, 9, 6, 4, 3, 2, 1, 2, 56};
//     int n = sizeof(arr) / arr[0];

//     for (int i = 0; i < n; i++)
//     {

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
// left rorate by an array

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8};
//     int temp = v1[0];
//     for (int i = 1; i < v1.size(); i++)
//     {
//         v1[i - 1] = v1[i];
//     }
//     v1[v1.size()-1] = temp;

//     for (auto it : v1)
//     {
//         cout << it << " ";
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
//  better solution to rotate

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int k, j = 0;
//     cin >> k;
//     vector<int> v1 = {1, 2, 3, 4, 5, 6};

//     reverse(v1.begin(), v1.begin() + k);
//     reverse(v1.begin() + k, v1.end());
//     reverse(v1.begin(), v1.end());

//     for (int i = 0; i < v1.size(); i++)
//     {
//         cout << v1[i] << " ";
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
// move all the zero number to the end

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int counter = 0;
//     int count = 0;

//     vector<int> arr = {1, 2, 5, 0, 7, 5, 8, 0, 6, 5, 7, 0, 8, 7, 0};
//     int n = arr.size();
//     int temp[n];

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] != 0)
//         {
//             temp[count] = arr[i];
//             count++;
//         }
//         if (arr[i] == 0)
//         {
//             counter++;
//         }
//     }

//     for (int i = count; i < n; i++)
//     {
//         temp[i] = 0;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << temp[i] << " ";
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
// move all the arraay optimal solution
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = {1, 2, 5, 0, 7, 5, 8, 0, 6, 5, 7, 0, 8, 7, 0};
//     int n = arr.size();
//     int j = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             j = i;
//             break;
//         }
//     }

//     for (int i = j + 1; i < n; i++)
//     {
//         if (arr[i] != arr[j])
//         {
//             swap(arr[i], arr[j]);
//             j++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
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
// linear search of an array

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 6, 7, 8, 9};

//     int findelement;
//     cout << "enter the searching element. ";
//     cin >> findelement;

//     if (findelement > arr.size())
//     {
//         return 0;
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] == findelement)
//         {
//             cout << "the element present at the index. " << i;
//         }
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
// find  union of two array
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr1 = {1, 2, 3, 4, 6, 7, 8, 9};
//     vector<int> arr2 = {2, 4, 6, 9, 74, 7, 9, 7, 4, 3};
//     set<int> tempset;

//     // inserting first unique element
//     for (int i = 0; i < arr1.size(); i++)
//     {
//         tempset.insert(arr1[i]);
//     }

//     // insrting second array unique element
//     for (int i = 0; i < arr2.size(); i++)
//     {
//         tempset.insert(arr2[i]);
//     }

//     for (auto it : tempset)
//     {
//         cout << it << " ";
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
// finding intersection of two array

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr1 = {1, 2, 3, 4, 6, 7, 8, 9};
//     vector<int> arr2 = {2, 4, 6, 9, 74, 7, 9, 7, 4, 3};
//     vector<int> temp;
//     int n1 = arr1.size();
//     int n2 = arr2.size();

//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             if (arr1[i] == arr2[j])
//             {
//                 temp.push_back(arr1[i]);
//                 arr2[j] = -1;
//                 break;
//             }
//         }
//     }

//     for (int i = 0; i < temp.size(); i++)
//     {
//         cout << temp[i] << " ";
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
//     vector<int> arr1 = {1, 2, 3, 4, 6, 7, 8, 9};
//     vector<int> arr2 = {2, 4, 6, 9, 74, 7, 9, 7, 4, 3};
//     int n = arr1.size();
//     int m = arr2.size();

//     vector<int> temp;

//     int i = 0;
//     int j = 0;

//     while (i < n && i < m)
//     {

//         if (arr1[i] < arr2[j])
//         {
//             i++;
//         }
//         else if (arr2[j] < arr1[i])
//         {
//             j++;
//         }
//         else if(arr1[i] == arr2[i])
//         {
//             temp[i] = arr1[i];
//         }
//     }

//     for (int i = 0; i < temp.size(); i++)
//     {
//         cout << temp[i] << " ";
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
// right move array by d place
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
//     vector<int> ans;
//     int n = arr.size();
//     int last = n;
//     int d;
//     cin >> d;

//     d = d % n;
//     if (d == 0)
//     {
//         for (auto it : arr)
//         {
//             cout << it << " ";
//         }
//     }
//     else
//     {

//         for (int i = n - d; i < n; i++)
//         {
//             ans.push_back(arr[i]);
//         }

//         for (int i = 0; i < n - d; i++)
//         {
//             ans.push_back(arr[i]);
//         }

//         for (auto it : ans)
//         {
//             cout << it << " ";
//         }
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
//    missing number in an array
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, ans = 0;
//     cout << "enter the size of the array. ";
//     cin >> n;
//     int arr[n];

//     cout << "insert element n. ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int hash[n] = {0};

//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[i]] = 1;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         if (hash[i] == 0)
//         {
//             ans = i;
//         }
//     }

//     cout << "missing number is = " << ans << endl;
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

// maximum sum of an sub array

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = {3, -4, 5, 4, -1, 7, -8};
//     int maxsum = INT_MIN;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int arrysum = 0;
//         for (int j = i; j < arr.size(); j++)
//         {
//             arrysum += arr[j];
//             maxsum = max(maxsum, arrysum);
//         }
//     }
//     cout << " max sum = " << maxsum;
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
//   two pointer aproach in in addition of two number in an aray.

// #include <bits/stdc++.h>
// using namespace std;
// int mai()
// {
//     vector<int> arr = {2, 5, 7, 9, 5, 2};
//     int n = arr.size();
//     int target;
//     cout << "enter the sum you find ! ";
//     cin >> target;
//     int i = 0;
//     int j = n;

//     while (i < n)
//     {
//         if (arr[i] + arr[j] > target)
//         {
//             j--;
//         }

//         else if (arr[i] < arr[j] < target)
//         {
//             i++;
//         }
//         else if (arr[i] + arr[j] == target)
//         {
//             cout << "index values is  = " << i << j;
//             break;
//         }
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

// leadersin an array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {2, 3, 5, 23, 5, 6, 77, 64, 34, 5, 6, 8, 8, 2};
    vector<int> ans;
    bool leader;
    for (int i = 0; i < arr.size(); i++)
    {
        leader = true;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] > arr[j])
            {
                leader = false;
                break;
            }
        }
        if (leader == true)
        {
            ans.emplace_back(arr[i]);
        }
    }

    for (auto it : ans)
    {
        cout << "leaders = " << it << endl;
    }
    return 0;
}