#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int count = 0;
    int element = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
        {
            element = nums[i];
            count = 1;
        }
        else if (element == nums[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return element;
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
    cout<<majorityElement(arr);
    return 0;
}