#include<bits/stdc++.h>
using namespace std;

void sub(int *arr,int n)
{
    int ms=0,cs=0;
    for (int i = 0; i < n; i++)
    {
        cs=cs+arr[i];
        if (cs<0)
        {
            cs=0;
        }
        ms=max(ms,cs);
    }
    cout<<ms;
}
int main()
{
    int arr[100];
    int n;
    cout<<"ener size if array: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sub(arr,n);
    return 0;
}