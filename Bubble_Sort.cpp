#include <bits/stdc++.h>
using namespace std;
void bubblesort(int *arr,int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr,n);

    return 0;
}
/*
int main()
{
    int arr[]={12,34,87,50,36,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)//because the last element would'nt get compared with any
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
*/

//optimised
/*
int main()
{
    int arr[]={12,34,87,50,36,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        int swapped=0;
        for (int j = 0; j < n-i-1; j++)//because the last element would'nt get compared with any
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }
        if(swapped==0)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}*/