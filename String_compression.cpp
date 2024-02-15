#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int n = s.length();
    int count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            if (count == 1)
            {
                cout << s[i];
            }
            else
            {
                cout << s[i] << count;
                count = 1;
            }
        }
    }
    if (count == 1)
    {
        cout << s[n - 1];
    }
    else
    {
        cout << s[n - 1] << count;
    }
    return 0;
}