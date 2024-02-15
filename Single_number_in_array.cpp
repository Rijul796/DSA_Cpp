#include <bits/stdc++.h>
using namespace std;
// int singleNumber(vector<int>& nums) {
//         int n=nums.size();
//         sort(nums.begin(),nums.end());
//         for (int i = 0; i < n - 1; i += 2) {
//             if (nums[i] != nums[i + 1]) {
//                 return nums[i];
//             }
//         }
//         return nums.back(); // If single number is at the end of the array
//     }
int singleNumber(vector<int> &nums)
{
    int Xor = 0;
    int n=nums.size();
    for (int i = 0; i < n; i++)
    {
        Xor ^= nums[i];
    }
    return Xor;
}
int main()
{
    vector<int> arr;
    int n;
    cout << "enter length of array :";
    cin >> n;
    cout << "enter elements: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout<<singleNumber(arr);
    return 0;
}