#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "Jibo boro hote hbe";
    // cout << s.size() << endl;
    // cout << s.max_size() << endl;
    // cout << s.capacity() << endl;
    // s.clear();
    // cout << s << endl;

    // string e = "l";
    // if (e.empty() == true)
    //     cout << "Empty" << endl;
    // else
    //     cout << "not empty";

    string e;
    cin >> e;
    e.resize(5);
    e.resize(20, 'TT');
    cout << e.size() << endl;
    cout << e << endl;

    return 0;
}