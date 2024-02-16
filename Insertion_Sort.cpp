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

/*
int main()
{
    int arr[]={12,34,87,50,36,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        int j=i;
        while (j>0&&arr[j-1]>arr[j])//while value of j is greater than 0 and the element on the left is greater than the element on the right side of the array 
        {
            swap(arr[j-1],arr[j]);// if the elements on the left are greater then swapping will be done and value of j will e decreased by 1 to check for the next left index with the swapped element
            j--;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}*/