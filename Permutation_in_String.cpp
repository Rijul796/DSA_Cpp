#include<bits/stdc++.h>
using namespace std;

void permute(string &output,int i,int n)
{
    if(i==n-1)
    {
        cout<<output<<endl;
        return;
    }
    for(int j=i;j<n;j++)
    {
        swap(output[i],output[j]);
        permute(output,i+1,n);
    }
}

int main()
{
    string input="abc";
    permute(input,0,3);
    return 0;
}