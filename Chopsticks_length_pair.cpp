#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    int x;
    cout<<"enter length of array: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int d;
    cout<<"enter difference in length for pair: ";
    cin>>d;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (v[j]-v[i]<=d)//check the difference between 2nd and 1st element
            {
                count++;//if true then increment count by 1
                i++;// increment by 1 here and by 1 in the outer loop to skip the elements we checked for pair
                break;//skip the rest of the loop as we found a pair
            }
        }
    }
    cout<<"no. of pairs are: "<<count;
    return 0;
}