#include <bits/stdc++.h>
using namespace std;

void mid(stack<int>&st, int count, int size)
{
    if (count == size / 2)
    {
        cout<<st.top()<<endl;
        st.pop();
        return;
    }
    int num=st.top();
    st.pop();
    mid(st,count+1,size);
    st.push(num);
}

int main()
{
    stack<int> st;
    int n;
    cout << "enter size: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    mid(st,0,n);
    cout<<"the stack is: "<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}