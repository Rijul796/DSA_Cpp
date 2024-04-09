#include<iostream>
#include<deque>
using namespace std;

int sumOfMaxMinSubarrays(int *arr, int n, int k) {
    // Deque to store indices of elements in the current window
    deque<int> maxDeque(k);
    deque<int> minDeque(k);

    int ans = 0;

    // Process the first window of size k
    for(int i = 0; i < k; i++) {
        // Remove elements from the deque that are not part of the current window
        while(!maxDeque.empty() && arr[maxDeque.back()] <= arr[i])
            maxDeque.pop_back();
        while(!minDeque.empty() && arr[minDeque.back()] >= arr[i])
            minDeque.pop_back();
        
        // Add the current element's index to the deque
        maxDeque.push_back(i);
        minDeque.push_back(i);
    }

    // Add the sum of maximum and minimum elements of the first window to the answer
    ans += arr[maxDeque.front()] + arr[minDeque.front()];

    // Process remaining windows
    for(int i = k; i < n; i++) {
        // Remove elements from the deque that are not part of the current window
        while(!maxDeque.empty() && i - maxDeque.front() >= k)
            maxDeque.pop_front();
        while(!minDeque.empty() && i - minDeque.front() >= k)
            minDeque.pop_front();
        
        // Remove elements from the deque that are smaller or equal to the current element
        while(!maxDeque.empty() && arr[maxDeque.back()] <= arr[i])
            maxDeque.pop_back();
        while(!minDeque.empty() && arr[minDeque.back()] >= arr[i])
            minDeque.pop_back();
        
        // Add the current element's index to the deque
        maxDeque.push_back(i);
        minDeque.push_back(i);

        // Add the sum of maximum and minimum elements of the current window to the answer
        ans += arr[maxDeque.front()] + arr[minDeque.front()];
    }
    return ans;
}

int main() {
    int arr[7] = {2, 5, -1, 7, -3, -1, -2};
    int k = 4;
    cout << "Sum of maximum and minimum elements in all subarrays of size " << k << ": " << sumOfMaxMinSubarrays(arr, 7, k) << endl;
    return 0;
}
