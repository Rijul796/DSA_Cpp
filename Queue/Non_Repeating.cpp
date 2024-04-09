#include<bits/stdc++.h>
using namespace std;
string FirstNonRepeating(string A) {
    // Map to store the count of each character in the string
    unordered_map<char, int> count;
    // Queue to store characters in the order they appear in the string
    queue<char> q;
    // String to store the answer
    string ans = "";
    // Iterate through each character in the input string
    for (char ch : A) {
        // Increment the count of the current character
        count[ch]++;
        // Push the current character to the queue
        q.push(ch);
        // Remove characters from the front of the queue until a non-repeating character is found
        while (!q.empty() && count[q.front()] > 1) {
            q.pop();
        }
        // If the queue is empty, there are no non-repeating characters encountered so far
        if (q.empty()) {
            // Append '#' to the answer string
            ans.push_back('#');
        } else {
            // Append the first non-repeating character found so far to the answer string
            ans.push_back(q.front());
        }
    }
    return ans;
}
int main() {
    string A;
    cin >> A; 
    string ans = FirstNonRepeating(A);
    cout << ans << "\n";
    return 0;
}
