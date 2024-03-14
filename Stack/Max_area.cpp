#include <bits/stdc++.h>
using namespace std;

// Function to find the previous smaller elements (PSE) for each element in the vector
vector<int> pse(const vector<int> &v) {
    int b = v.size();
    vector<int> ps(b);

    stack<int> s;

    for (int i = 0; i < b; i++) {
        while (!s.empty() && v[s.top()] >= v[i]) {
            s.pop();
        }
        if (s.empty()) {
            ps[i] = -1; // If no previous smaller element exists, set it to -1
        } else {
            ps[i] = s.top();
        }
        s.push(i);
    }
    return ps;
}

// Function to find the next smaller elements (NSE) for each element in the vector
vector<int> nse(const vector<int> &v) {
    int n = v.size();
    vector<int> ns(n, n); // Initialize ns with n (size of vector) as default value

    stack<int> s;

    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && v[s.top()] >= v[i]) {
            s.pop();
        }
        if (!s.empty()) {
            ns[i] = s.top(); // Update ns with the index of the next smaller element
        }
        s.push(i);
    }
    return ns;
}

// Function to calculate the maximum area of the histogram
int area(vector<int> a) {
    int s = a.size();
    int max_area = 0;
    vector<int> ps = pse(a); // Get the previous smaller elements
    vector<int> ns = nse(a); // Get the next smaller elements

    // Calculate the area for each bar and update max_area if necessary
    for (int i = 0; i < s; i++) {
        int arr = (ns[i] - ps[i] - 1) * a[i]; // Width * Height
        max_area = max(max_area, arr); // Update max_area if the current area is greater
    }
    return max_area;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Find and print the previous smaller elements for each element in the array
    vector<int> result = pse(v);
    cout << "Previous smaller elements: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    // Find and print the next smaller elements for each element in the array
    vector<int> result2 = nse(v);
    cout << "Next smaller elements: ";
    for (int i = 0; i < n; i++) {
        if (result2[i] != n) { // If next smaller element exists
            cout << result2[i] << " ";
        } else { // If no next smaller element exists
            cout << "None "; // Print "None" instead of n
        }
    }
    cout << endl;

    // Calculate and print the maximum area of the histogram
    cout << "Maximum area: " << area(v) << endl;

    return 0;
}
