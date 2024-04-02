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
    int x;
    cout<<"enter num to insert at first position in stack: ";
    cin>>x;
    insert_at_bottom(s,x);
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop(); // Pop the top element after printing
    }
    
    return 0;
}