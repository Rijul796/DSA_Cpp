#include<bits/stdc++.h>
using namespace std;
// void fun(int x)
// {
//     if (x<=0)
//     {
//         return ;
//     }
//     // cout<<x;
//     fun(x-1);
//     cout<<x<<" ";//backtracking
    
// }
// int main()
// {
//     int n;
//     cin>>n;
//     fun (n);
//     return 0;
// }



int fun(int arr[], int n, int k)
{
    if(n == 0)
    {
        return -1;
    }
    if(arr[0] == k)
    {
        return 0;
    }
    int i = fun(&arr[1], n-1, k);
    if(i != -1)
    {
        return i+1;
    }
    return -1;
}

int main()
{
    int n;
    int arr[100];
    int x;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    int result = fun(arr, n, x);
    if(result != -1)
    {
        cout<<"Element found at index: "<<result;
    }
    else
    {
        cout<<"Element not found";
    }
    return 0;
}
