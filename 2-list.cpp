#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> ls = {10, 20, 30};
    ls.push_back(34); // {10,20,30,34}

    ls.push_front(5); // {5,10,20,30,34}

    ls.emplace_back(40); //{5,10,20,30,34,40}      same as push_back but emplace back is batter than push_back()

    ls.emplace_front(3); // {3,5,10,20,30,34,40};

    ls.back();

    ls.front();

    ls.pop_back();  // {3,5,10,20,30,34}
    ls.pop_front(); // {5,10,20,30,34,40}

    return 0;
}

// all are the functions same as a vector

// like :-  emplace_back(), at(), swap(), empty(), size(),insert(), clear(), end(), begin() ..... etc.