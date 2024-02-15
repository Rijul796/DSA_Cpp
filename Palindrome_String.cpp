#include<bits/stdc++.h>
using namespace std;

void pelindrome(string s)
{
    int n=s.length();
    int x=1;
    for (int i = 0; i < n/2; i++)
    {
        if (s[i]!=s[n-i-1])
        {
            x=0;
            break;
        }
    }
    if (x==0)
    {
        cout<<"string is not a palindrome ";
    }
    else
    {
        cout<<"string is palindrome ";
    }

}
int main()
{
    string s;
    cout<<"enter string: ";
    getline(cin,s);
    pelindrome(s);
}