#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "enter string: ";
    getline(cin, s);
    int n = s.length();
    sort(s.begin(), s.end());
    string x;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1 || s[i] != s[i + 1])
        {
            x += s[i];
        }
    }
    cout << x;
    return 0;
}
/*
#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;
string removeDuplicate(string s)
{
    set<char> ss(s.begin(), s.end());
    string str;
    for (auto x : ss)
        str.push_back(x);
    return str;
}
int main()
{
    string input;
    cin >> input;
    string result = removeDuplicate(input);
    cout << result << endl;
    return 0;
}*/