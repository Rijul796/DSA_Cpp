#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"enter string: ";
    getline(cin,s);
    queue<char>q;
    int n=s.length();
    // for (int i = 0; i < n; i++)
    // {
    //     q.push(s[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<q.front();
    //     q.pop();
    // }
    // if(q.empty())
    // {
    //     cout<<"queue is empty! ";
    // }
    map<char,int>m;
    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    if(s.empty())
    {
        cout<<"empty string! ";
    }
    q.push(s.front());
    cout<<q.front();
    for (int i = 1; i < n; i++)
    {
        if(q.front()==s[i])
        {
            q.pop();
        }
        if (q.empty())
        {
            cout<<"0";
            q.push(s[++i]);
        }
        cout<<q.front();
    }
    return 0;
}