// #include <iostream>
// using namespace std;

// void subarr(int *arr, int n)
// {
//     int ls=0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             int sum=0;

//             for (int k = i; k <= j; k++)
//             {
//                 // cout<<arr[k]<<" ";
//                 sum=sum+arr[k];
//                 ls=max(ls,sum);
//             }
//             cout << endl;
//         }
//     }
//     cout<<"The maximum sum of the subarray is : " <<ls;
// }

// int main()
// {
//     int n;
//     cout << "Enter the size of array : ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter the elements of array : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "The array is : ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     subarr(arr,n);
//     return 0;
// }
#include<iostream>
using namespace std;

int subarr(int *arr,int n){
    int cs=0;
    int ms=0;
    for(int i=0;i<n;i++){
        cs=cs+arr[i];
        if(cs<0){
            cs=0;
        }
        ms=max(cs,ms);
    }
    return ms;
}

int main(){
    int arr[100];
    int n;
    cout<<"enter length of array: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<(subarr(arr,n));
    return 0;
}