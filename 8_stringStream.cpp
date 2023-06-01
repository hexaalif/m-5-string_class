#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int c = 0;
    while (ss >> word)
    {
        // cout << word << endl;
        c++;
    }
    cout << c;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    return 0;
}