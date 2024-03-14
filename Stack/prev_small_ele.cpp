#include <bits/stdc++.h>
#include <stack>
using namespace std;

void prev_min(int *arr, int n)
{
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && (s.top() >= arr[i]))
        {
            s.pop();
        }

        if (s.empty())
        {
            cout << -1 << " ";
        }
        else
        {
            cout << s.top() << " ";
        }
        s.push(arr[i]);
    }
}

void next_min(int *arr, int n)
{
    int arr2[n];
    stack<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && arr[i] <= s.top())
        {
            s.pop();
        }

        if (s.empty())
        {
            arr2[i] = -1;
        }
        else
        {
            arr2[i] = s.top();
        }
        s.push(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
}

void take_input(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
 
int main()
{
    int n;
    cout << "enter the length of arr : ";
    cin >> n;
    int arr[n];
    take_input(arr, n);
    prev_min(arr, n);
    cout << endl;
    next_min(arr, n);
}
