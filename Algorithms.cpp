#include<bits/stdc++.h>
using namespace std;
//linear search
// int ls(int arr[],int n,int x)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]==x)
//         return i;
//     }
//     return -1;
// }
// int main()
// {
//     int arr[]={3,7,9,8,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int x;
//     cout<<"enter num to search: ";
//     cin>>x;
//     int y=ls(arr,n,x);
//     if(y==-1)
//     {
//         cout<<"number is not in array !";
//     }
//     else{
//         cout<<"number is at index: "<<y;
//     }
//     return 0;
// }


//binary search
// int binarySearch(int arr[],int size,int key) // better than linear search as its time complexity is O(log n) whereas in linear search its O(n).
// {
//     int start = 0;
//     int end = size-1;
//     int mid = start +(end-start)/2;  // to prevent overflow
//     while(start<=end)
//     {
//         if(arr[mid]==key)
//         {
//             return mid;
//         }
//         else if(arr[mid]<key)
//         {
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid = start + (end-start)/2;
//     }
//     return -1;
// }

// int main()
// {
//     int arr[10000] = {0};
//     int n,key;
//     cout << "Enter size of array: ";
//     cin >> n;
//     for(int i = 0;i<n;i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Enter element to be searched: ";
//     cin >> key;
//     int ans = binarySearch(arr,n,key);
//     cout << ans;
// }


//reversing array
// int main()
// {
//     int arr[]={1,2,3,4,5,6,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int x=0;
//     for (int i = 0; i < n/2; i++)
//     {
//         x=arr[i];
//         arr[i]=arr[n-i-1];
//         arr[n-i-1]=x;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// int bin(int arr[],int k,int n){
//     int mid,start=0,end=n-1;
//     mid=(start+end)/2;//or we can use mid=start+(end-start)/2;
//     while (start<=end)
//     {
//         if(arr[mid]==k){
//         return mid;}
//         if(k>arr[mid])
//         {
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=(start+end)/2;//or we can use mid=start+(end-start)/2;
//     }
//     return -1;
// }
// int main()
// {
//     int arr[100];
//     int n,k;
//     cout<<"enter size of array: ";
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     sort(arr,arr+n);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"enter element to search in array: ";
//     cin>>k;
//     cout<<bin(arr,k,n);
//     return 0;
// }

// int main()
// {
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;

//     int arr[n];

//     cout<<"Enter the elements of array : ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     cout<<"The array is : ";
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             for(int k=i;k<=j;k++)
//             {
//                 cout<<arr[k]<<" ";
//             }
//             cout<<endl;
//         }
//         cout<<endl;
//     }
// }


// #include <iostream>
// using namespace std;

// void subArray(int arr[],int n)
// {
//     int sum = 0,max=-1;
//     for(int i = 0;i<n;i++)
//     {
//         for(int j = i;j<n;j++)
//         {
//             for(int k = i;k<=j;k++)
//             {
//                 cout << arr[k] << " ";
//                 sum = sum + arr[k];
//             }
//             cout << endl;
//             if(sum>max)
//             {
//                 max = sum;
//             }
//             sum = 0;
//         }
//     }
//     cout << max << endl;
// }

// int main()
// {
//     int arr[100] = {0};
//     int n;
//     cin >> n;
//     for(int i = 0;i<n;i++)
//     {
//         cin >> arr[i];
//     }
//     subArray(arr,n);
//     return 0;
// }
/*
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;

//     int arr[n];

//     cout<<"Enter the elements of array : ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     cout<<"The array is : ";
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             for(int k=i;k<=j;k++)
//             {
//                 cout<<arr[k]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     cout<<endl;
// }*/


void subarr(int *arr, int n)
{
    int ls=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum=0;

            for (int k = i; k <= j; k++)
            {
                // cout<<arr[k]<<" ";
                sum=sum+arr[k];
                ls=max(ls,sum);
            }
            // cout << endl;
        }
    }
    cout<<ls;
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    subarr(arr,n);
    return 0;
}
