#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t)
{
    int n = s.size();
    unordered_map<char, char> st, ts;
    for (int i = 0; i < n; i++)
    {
        char cs = s[i], ct = t[i];
        if (st.count(cs) == 0 && ts.count(ct) == 0)
        {
            st[cs] = ct;
            ts[ct] = cs;
        }
        else
        {
            if (st[cs] != ct || ts[ct] != cs)
            return 0;
        }
    }
    return 1;
}

int main()
{
    string s,t;
    cout<<"enter two strings"<<endl;
    getline(cin,s);
    getline(cin,t);
    if(isIsomorphic(s,t))
    {
        cout<<"the strings are isomophic";
    }
    else
    {
        cout<<"the strings are not isomorphic";
    }
    return 0;
}