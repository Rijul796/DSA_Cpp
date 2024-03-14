#include<bits/stdc++.h>
using namespace std;
// Function to find the element with the highest frequency in the given vector
int max_freq(vector<int>& v) {
    unordered_map<int, int> m; // Create an unordered_map to store the frequency of each element
    int max_frq = 0;           // Variable to keep track of the maximum frequency encountered so far
    int n = v.size();          // Get the size of the input vector

    // Iterate through the vector to calculate the frequency of each element
    for (int i = 0; i < n; i++) {
        m[v[i]]++;              // Increment the frequency count for the current element
        max_frq = max(max_frq, m[v[i]]); // Update max_frq if the frequency of the current element is greater
    }

    int res = 0; // Variable to store the result (element with the highest frequency)

    // Iterate through the vector again to find the first element with the maximum frequency
    for (int i = 0; i < n; i++) {
        if (max_frq == m[v[i]]) { // If the frequency of the current element is equal to max_frq
            res = v[i];           // Update the result with the current element
            break;                // Exit the loop since we have found the first element with maximum frequency
        }
    }

    return res; // Return the element with the highest frequency
}

int main() {
    vector<int> v = {1, 2, 3, 1, 1, 3}; // Create a sample vector with elements
    cout << max_freq(v);                // Call the max_freq function and print the result
    return 0;                           // Indicate successful completion of the program
}