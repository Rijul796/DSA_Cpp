#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int low,int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;
    while (i<j)
    {
        while (arr[i]<=pivot && i<= high-1)
        {
            i++;
        }
        while (arr[j] > pivot && j>= low+1)
        {
            j--;
        }
        if (i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void qs(vector<int> &arr,int low,int high)
{
    if(low<high)
    {
        int pi=partition(arr,low,high);
        qs(arr,low,pi-1);
        qs(arr,pi+1,high);
    }
}

int main()
{
    vector<int> arr;
    int n;
    cout<<"enter length of array :";
    cin >> n;
    cout<<"enter elements: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    qs(arr,0,n-1);
    for(int i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}
