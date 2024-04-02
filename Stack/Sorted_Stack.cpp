#include <bits/stdc++.h> // Include necessary header file
using namespace std;

// Function to insert 'num' in a sorted manner into the stack 's'
void sorted_insert(stack<int>& s, int num) {
    // If stack is empty or top of stack is less than 'num', simply push 'num' onto the stack
    if (s.empty() || (!s.empty() && s.top() < num)) {
        s.push(num);
        return;
    }
    // If the top of stack is greater than or equal to 'num', recursively pop elements until
    // we find the correct position to insert 'num'
    int n = s.top();
    s.pop();
    sorted_insert(s, num);
    s.push(n); // Push 'n' back onto the stack after inserting 'num' in correct position
}

// Function to sort the stack 's'
void sorted(stack<int>& s) {
    if (s.empty()) { // Base case: if stack is empty, return
        return;
    }
    int num = s.top(); // Store top element of the stack
    s.pop(); // Pop the top element
    sorted(s); // Recursively sort the remaining stack
    sorted_insert(s, num); // Insert the top element back in sorted manner
}

// Main function
int main() {
    stack<int> s; // Create a stack of integers
    int n;
    cout << "Enter size of stack: ";
    cin >> n; // Input size of stack from user
    cout << "Enter elements in unsorted manner: " << endl;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x; // Input elements of stack from user
        s.push(x); // Push the element onto the stack
    }
    sorted(s); // Sort the stack
    cout << "The sorted stack is: ";
    // Print the elements of the stack from top to bottom
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop(); // Pop the top element after printing
    }
    return 0;
}
