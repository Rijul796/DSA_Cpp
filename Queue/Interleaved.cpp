#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeQueue(queue<int> q) {
    vector<int> ret(q.size()); // Result vector to store the rearranged queue
    // Fill the even indices first
    int i = 0;
    // int n = q.size(); // Cache the original size of the queue
    size_t n = q.size();
    while (q.size() != n / 2) {
        ret[i] = q.front(); // Place the front element of the queue at even index
        q.pop();
        i += 2;
    }
    // Reset index to fill the odd indices
    i = 1;
    // Fill the odd indices
    while (!q.empty()) {
        ret[i] = q.front(); // Place the front element of the queue at odd index
        q.pop();
        i += 2;
    }
    return ret; // Return the rearranged queue
}
int main() {
    queue<int> q;
    int n;
    cout << "enter size of queue: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    vector<int> result = rearrangeQueue(q);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
