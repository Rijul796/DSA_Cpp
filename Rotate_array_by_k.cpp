#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int n;
    cout << "enter length of array :";
    cin >> n;
    cout << "enter elements: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int k;
    cin >> k;
    rotate(arr.begin(), arr.end() - k, arr.end());
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}
/*
#include <iostream>
#include <vector>
using namespace std;
vector<int> kRotate(vector<int> a, int k)
{
    vector<int> v;
    int n = a.size();
    k = k % n;
    for (int i = 0; i < n; i++)
    {
        if (i < k)
        {
            v.push_back(a[n + i - k]);
        }
        else
        {
            v.push_back(a[i - k]);
        }
    }
    return v;
}
int main()
{
    // Input the vector
    int n;
    cin >> n;
    vector<int> input(n);
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    // Input the value of k
    int k;
    cin >> k;
    // Test the function
    vector<int> result = kRotate(input, k);
    // Output the rotated vector
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}*/