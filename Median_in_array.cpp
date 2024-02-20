#include<bits/stdc++.h>
using namespace std;
double med(vector<int>&nums1,vector<int>&nums2){
    vector<int>v;
        for(auto num:nums1)   
            v.push_back(num);
        
        for(auto num:nums2)  
            v.push_back(num);
        
        sort(v.begin(),v.end()); 
        
        int n=v.size(); 
        if (n % 2 != 0) {
            return v[n / 2];
            } 
        else 
        {
            return (v[n / 2 - 1] + v[n / 2]) / 2.0;
        }
}
int main()
{
    vector<int> arr1;
    vector<int> arr2;
    int n,m;
    cout << "enter length of array1 and 2: ";
    cin >> n>>m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr2.push_back(x);
    }
    cout<<"the median is: "<<med(arr1,arr2);
    return 0;
}