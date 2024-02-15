#include <bits/stdc++.h>
using namespace std;

string firstPalindrome(vector<string> &words)
{
    string final;
    for (const auto &s : words)
    {
        int x = s.size();
        bool isPalindrome = true;
        for (int i = 0; i < x / 2; i++)
        {
            if (s[i] != s[x - i - 1])
            {
                isPalindrome = false;
                break;
            }
        }
        if (isPalindrome)
        {
            final = s;
            break;
        }
    }
    return final;
}

int main()
{
    vector<string> v;
    int n;
    string x;
    cout << "enter length of array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cout << firstPalindrome(v);

    return 0;
}