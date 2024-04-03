#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    q.push("0");
    q.push("1");
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Binary numbers up to " << n << ":" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << q.front() << endl;
        string x = q.front() + "0";
        q.push(x);
        x = q.front() + "1";
        q.push(x);
        q.pop();
    }
    return 0;
}