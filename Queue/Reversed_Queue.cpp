#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     queue<int>q;
//     int n;
//     cout<<"enter size of queue: ";
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin>>x;
//         q.push(x);
//     }
//     stack<int>s;
//     while (!q.empty())
//     {
//         s.push(q.front());
//         q.pop();
//     }
//     while (!s.empty())
//     {
//         q.push(s.top());
//         s.pop();
//     }
//     while (!q.empty())
//     {
//         cout<<q.front()<<" ";
//         q.pop();
//     }

//     return 0;
// }

void rev(queue<int> &q)
{
    if (q.empty())
    {
        return;
    }
    int x = q.front();
    q.pop();
    rev(q);
    q.push(x);
}

int main()
{
    queue<int> q;
    int n;
    cout << "enter size of queue: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    rev(q);
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
}