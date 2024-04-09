#include<bits/stdc++.h>
using namespace std;

void fun(int index,vector<int> v,int arr[],int n)
{
    if(index==n)
    {
        for(auto i:v)
        {
            cout<<i<<" ";
        }
        if(v.size()==0)
        {
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    v.push_back(arr[index]);
    fun(index+1,v,arr,n); 
    v.pop_back();
    fun(index+1,v,arr,n);
}

int main()
{
    int arr[]={1,2,3};
    int n=3;
    vector<int>v;
    fun(0,v,arr,n);
    return 0;
}