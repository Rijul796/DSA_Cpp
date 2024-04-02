#include<bits/stdc++.h>
using namespace std;
void insert_at_bottom(stack<int>&s,int x)
{
    if(s.empty())
    {
        s.push(x);
        return;
    }
    int num=s.top();
    s.pop();
    insert_at_bottom(s,x);
    s.push(num);
}
void reverse(stack<int>&s)
{
    if(s.empty())
    {
        return;
    }
    int num=s.top();
    s.pop();
    reverse(s);
    insert_at_bottom(s,num);
}
int main()
{
    stack<int>s;
    int n;
    cout<<"enter size of stack: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    reverse(s);
    cout<<"the reversed stack is: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop(); // Pop the top element after printing
    }
    return 0;
}