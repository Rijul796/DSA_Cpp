#include <iostream>
#include <vector>
using namespace std;

int ele_index(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            low = mid + 1;//If the element at index mid is less than the target, it means the target must be in the right half of the search space. So, low is updated to mid + 1.
        else
            high = mid - 1;//If the element at index mid is greater than the target, it means the target must be in the left half of the search space. So, high is updated to mid - 1
    }
    return low;//If the target is not found in the array, the loop will terminate when low becomes greater than high. In this case, low represents the index where the target should be inserted to maintain the sorted order of the array. So, the function returns low.
}

int main() {
    vector<int> nums = {1, 4, 6, 8, 10};
    int target;
    cin>>target;
    cout << ele_index(nums, target);
    return 0;
}
