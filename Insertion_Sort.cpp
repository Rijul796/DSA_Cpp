#include<bits/stdc++.h>
using namespace std;


void insertion_sort(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        int curr=arr[i];
        int prev=i-1;

        while(arr[prev]>curr && prev>=0)
        {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"The array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    insertion_sort(arr,n);

    cout<<"The sorted array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
