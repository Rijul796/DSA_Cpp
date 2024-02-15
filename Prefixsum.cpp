#include<bits/stdc++.h>
using namespace std;
 
void subarr(int *arr, int n)
{
    int pre[100]={0};
    pre[0]=arr[0];
    for (int i = 1; i < n; i++)
    {
        pre[i]=arr[i]+pre[i-1];
    }
    
    int ls=0;
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        for (int j = i; j < n; j++)
        {
            sum=i>0?pre[j]-pre[i-1]:pre[j];
            ls=max(sum,ls);
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