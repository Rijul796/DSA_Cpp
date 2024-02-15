#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;    /*low....mid------mid+1....high*/
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.emplace_back(arr[left]);
            left++;
        }
        else
        {
            temp.emplace_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.emplace_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.emplace_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i]=temp[i-low];
    }
    for (auto i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;    
}
void div(vector<int> &arr, int low, int high)
{
    if (low == high)
    {
        return;
    }
    int mid = (low + high) / 2;
    div(arr, low, mid);
    div(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
void merge_sort(vector<int> &arr, int n)
{
    div(arr, 0, n - 1);
}

int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    merge_sort(arr,n);
    return 0;
}