#include<bits/stdc++.h>
using namespace std;
void reverse_k(queue<int>&q,int k)
{
    stack<int>s;
    int n=q.size();
    int z=n-k;
    while (k--)
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    while (z--)
    {
        int x=q.front();
        q.pop();
        q.push(x);
    }
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
    int k;
    cout<<"enter the value of k: ";
    cin>>k;
    reverse_k(q,k);
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
