// three things in STL
// 1) iterator
// 2) container
// 3) algorithm

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // main function are used in vectors :-

    // push_back()       same work     emplace_back()
    // emplace_back()    similerr to push back but it is (   faster then push_back()    ).
    // pop_back();       it is used to delete the last element.
    // at()              it is used to print the element of a :-  vector , queue, map;
    // back()
    // begin()
    // capacity()
    // clear()
    // emplace()
    // emplace_back()     (as like push_back)
    // empty()
    // end()
    // erase()
    // swap()
    // size()
    // reserve()
    // insert()

    //       (( declaration in a vector ))

    vector<int> vac1 = {24, 54, 77, 9, 0, 76, 57};
    vector<int> vec2 = {6, 87, 4, 3, 6, 89, 876};

    // vac1.push_back(4);

    // cout << "value entered is = " << vac1[0] << endl; // pushback;

    // vac1.emplace_back(34);
    // cout << "emplace_back is = " << vac1[7] << endl;

    // cout << vac1.empty() << endl;

    // vac1.clear();
    // vac1.capacity();
    // vac1.size();

    vac1.swap(vec2);

    vector<int>::iterator i1 = vec2.begin();
    while (i1 != vec2.end())
    {
        cout << "element of vector = " << *i1 << endl;
        i1++;
    }

    vector<pair<int, int>> p1 = {{34, 34}, {234, 6543}, {23, 65}};

    p1.emplace_back(2, 4);

    vector<int> vec3(10, 100); //                  10 is the size of a vector and 100 data will go on all location.  example =  {100,100,100,100,100,100 ...... 100}

    vector<int> vec4(5); //               5 is the size of a vector      example = { [1],[2],[3],[4],[5] }.

    vector<int> vec6(vec3); //          (vec3) data copy on (vec6).

    vector<int>::iterator i2 = vec6.begin(); //          use of iterator

    while (i2 != vec6.end())
    {
        cout << "value of a vec6 = " << *i2 << endl;
        i2++;
    }

    // second way to print the elements of a vector

    for (auto ite = vec2.end(); ite != vec2.begin(); ite--)
    {
        cout << *ite << endl;
    }

    vector<int>::iterator ite1 = vec2.begin();
    cout << endl;

    //                           delete in a vector

    vec2.erase(vec2.begin(), vec2.end() - 3);

    for (auto inside = vec2.begin(); inside != vec2.end(); inside++)
    {
        cout << "value of new vec2 is = " << *inside << endl;
    }

    vector<string> si1 = {"satender", " rao shabh"};

    si1.insert(si1.begin(), "raoshab");

    for (auto p1 = si1.begin(); p1 != si1.end(); p1++)
    {
        cout << "value of  si1 = " << *p1 << endl;
    }

    vector<int> v = {34,54,65,4,7,888,7,5,4546,6,7,78,654,34,};
     v.emplace_back(19);
    return 0;
}

// study about pair