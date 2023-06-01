#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a = "hello";
    string b = "world";
    a.append(b);
    // a = a + b;
    a.push_back('T');
    a.pop_back();
    cout << a << endl;
    return 0;
}