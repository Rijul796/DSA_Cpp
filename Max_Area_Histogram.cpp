#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the maximum area of a container formed by a histogram
int maxArea(vector<int>& height) {
    int n = height.size(); // Get the size of the input vector
    int maxArea = 0; // Initialize the maximum area variable

    // Initialize two pointers, one at the beginning and one at the end of the vector
    int left = 0, right = n - 1;

    // Loop until the two pointers meet
    while (left < right) {
        // Calculate the width of the container formed by the two pointers
        int width = right - left;
        // Determine the minimum height of the two container walls
        int minHeight = min(height[left], height[right]);
        // Calculate the area formed by the current container and update maxArea if necessary
        maxArea = max(maxArea, width * minHeight);

        // Move the pointer with the smaller height towards the other pointer
        if (height[left] <= height[right]) {
            left++;
        } else {
            right--;
        }
    }

    // Return the maximum area found
    return maxArea;
}

// Main function
int main() {
    // Example histogram heights
    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    
    // Call the maxArea function and store the result
    int largestArea = maxArea(heights);
    
    // Output the result
    cout << "The largest area in the histogram is: " << largestArea << endl;

    return 0;
}
