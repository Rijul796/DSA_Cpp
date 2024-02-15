#include<bits/stdc++.h>
using namespace std;
int fun(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    return a*fun(a,b-1);
}
int main()
{
    int n1,n2;
    cout<<"enter nums: ";
    cin>>n1>>n2;
    cout<<fun(n1,n2);
    return 0;
}