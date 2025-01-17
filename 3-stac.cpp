#include <bits/stdc++.h>
using namespace std;

// stack is a (LIFO) :- last input ront output.

// function name : - emplace , empty ,pop , push ,size ,swap, top

void explainset();
void explainmultyset();
void expunorderset();
void expmap();
void expmultymap();
void aboutunordermap();

int main()
{
    stack<int> sh1;
    sh1.push(1);    //{1}
    sh1.push(2);    //{1,2}
    sh1.push(3);    //{1,2,3}
    sh1.push(4);    //{1,2,3,4}
    sh1.push(5);    //{1,2,3,4,5}
    sh1.push(6);    //{1,2,3,4,5,6}
    sh1.emplace(7); // {1,2,3,4,5,6,7}

    cout << sh1.top();

    cout << "\nsize of a stack is = " << sh1.size() << endl;

    cout << "does stack is empty or not = " << (char)sh1.empty() << endl;

    stack<int> sh2;

    sh2.emplace(10);

    sh2.swap(sh1);

    sh1.pop();

    //
    //
    //
    //
    //

    // queue data structure

    // it is a (FIFO) = first in first out

    queue<int> q1;
    q1.push(2);     //{2}
    q1.push(9);     // {2,9}
    q1.emplace(10); //{2,9,10}
    q1.pop();       // {9,10}
    q1.front();     //{9,10}
    q1.pop();       //{10}

    cout << q1.front() << endl
         << endl;

    //
    //
    //
    //
    //
    //
    //
    //

    //          proirity_quewe

    // in priority_queue data will set in increasing order

    priority_queue<int> pq;
    pq.emplace(3); //{3}
    pq.push(5);    //{3,5}
    pq.emplace(2); //{2,3,5}
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    //
    //
    //
    //
    //
    //
    //

    // we are learn about set

    explainset();

    // we wll learn about multy set

    explainmultyset();

    // we will learn about unordered_set

    expunorderset();

    // we will learm about the map

    expmap();

    // we will learn about the multimap

    expmultymap();

    // we will learn about the unordered_map

    aboutunordermap();
}

// set .

void explainset()
{

    // set contain all element in shorted order and same element contain only one time.

    set<int> s1;
    s1.insert(3);  //{3}
    s1.insert(9);  //{3,9}
    s1.insert(17); //{3,9,17}
    s1.insert(5);  //{3,5,9,17}
    s1.insert(9);  // {3,5,9,17}

    // other function used in set

    auto store = s1.find(9);

    s1.erase(5);
    s1.erase(store);

    auto st1 = s1.find(3);
    auto st2 = s1.find(9);

    s1.erase(st1, st2);
}
//
//
//
//
//
//

// multyset

void explainmultyset()
{
    // multy set also contain all element in shorted order but this is also contain  same elements multyple times
    multiset<int> ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}
    ms.insert(1); // {1,1,1,1}
    ms.insert(1); //{1,1,1,1,1}
    ms.insert(1); // {1,1,1,1,1,1}

    // and all function works like as a set template class
    // like :- erase ,insert ,pop ,clear , size ,empty ..... etc.
}

void expunorderset()
{
    // unorder set is not in order all elements store in rendom oredr but same elements store only one time.

    unordered_set<int> uns;

    // same as multyset
    // all function are also work in unorder set
    // uperbound and over bound function are not work
}

void expmap()
{
    // map store unique key in shortedd order
    // thera are two things in map first is key and second is value key will be same but value dose not same.

    // initilizing of map

    map<int, pair<int, int>> m1;

    map<int, int> m2;
    m2[1] = 2;         // {1,2}   (1) is the key and (2) is the value
    m2.insert({2, 3}); // {2,3} (2) is the key and (3) is the value.
    m2.emplace(234, 654);

    for (auto it : m2)
    {
        cout << it.first << "  " << it.second << endl;
    }

    map<double, pair<int, char>> ma3;
    ma3[34] = {23, 45}; // 34 is key and (23,45) is value.
    // first is key and second is value.

    map<int, string> rol_name; //      -: example
    rol_name.insert({239173, "satender"});
    rol_name.insert({239290, "sahil yadav"});

    for (auto it : rol_name)
    {
        cout << it.first << "  " << it.second << endl;
    }

    cout << rol_name[239173]; // they print value when we pass the key
    cout << rol_name[34];     // they print (0) because 34 key will not present in our code.

    // and all the functions are same like :- erase , empty ,size , push , ..... etc.
}

void multymap()
{
    // everything same as a map , only it can store multypal keys.
    // only map[key] cannot be use here
}

void aboutunordermap()
{
    // it will not stored in shorted
    
}