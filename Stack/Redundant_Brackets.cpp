#include <bits/stdc++.h>
using namespace std;

bool isRedundant(string &s)
{
    stack<char> st;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            if (ch == ')')
            {
                bool isredundant = true;
                while (st.top() != '(')
                {
                    char top = st.top();
                    if (top == '(' || top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        isredundant = false;
                    }
                    st.pop();
                }
                if (isredundant == true)
                {
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}

int main()
{
    string s;
    cout << "enter string of brackets: " << endl;
    getline(cin, s);
    if(isRedundant(s))
    {
        cout<<"redundant";
    }
    else
    {
        cout<<"not redundant";
    }
    return 0;
}