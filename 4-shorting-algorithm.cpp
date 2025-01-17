#include <bits/stdc++.h>
using namespace std;

// deceleration

void arrshort();
void vectorshorting();

int main()
{
    // vectorshorting();
    arrshort();
}

// array shorting defination

void arrshort()
{
    int arr[5] = {23, 5, 78, 6, 35};
    sort(arr, arr + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << "element " << i << " = " << arr[i] << endl;
    }

    int maxx = *max_element(arr, arr + 5);
    cout << "maximum element in arrray = " << maxx << endl;
}

// vector shorting defination
void vectorshorting()
{
    vector<int> v1 = {
        24,
        75,
        3,
        99,
        6,
        335,
        87,
    };
    sort(v1.begin(), v1.end());

    for (auto ite = v1.begin(); ite != v1.end(); ite++)
    {
        cout << "  " << *ite;
    }
}
