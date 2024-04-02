#include <bits/stdc++.h>
using namespace std;
/*
int main()
{
    priority_queue<int, vector<int>> pq;
    vector<int> v;
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        pq.push(v[i]);
    }
    int k;
    cout << "enter k :";
    cin >> k;
    int count = 1;
    while (k > count)
    {
        pq.pop();
        k--;
    }
    cout << pq.top();
    return 0;
}

*/
int klargest(int *arr, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }
    for (int i = k; i < 6; i++)
    {
        if (arr[i] > pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
}
int main()
{
    int arr[] = {20, 10, 60, 30, 50, 40};
    int k;
    cin >> k;
    cout << klargest(arr, k);
    return 0;
}