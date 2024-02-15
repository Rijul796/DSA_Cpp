#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
    int j = 1;
    sort(nums.begin(),nums.end());
    int n= nums.size();
    for (int i = 1; i < n; i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}
int main()
{
    vector<int> arr;
    int n;
    cout<<"enter length of array :";
    cin >> n;
    cout<<"enter elements: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout<<"number of unique elements are: "<<removeDuplicates(arr);
    return 0;
}