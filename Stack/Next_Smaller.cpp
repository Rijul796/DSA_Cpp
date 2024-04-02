#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmaller(vector<int>& arr, int n) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n, -1); // Initialize ans with -1
    for (int i = n - 1; i >= 0; i--) {
        int current = arr[i];
        while (!s.empty() && s.top() >= current) {
            s.pop();
        }
        if (!s.empty()) {
            ans[i] = s.top();
        }
        s.push(current);
    }
    return ans;
}

int main() {
    vector<int> v;
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    cout << "Enter elements of vector: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> ans = nextSmaller(v, n);
    cout << "Next smaller elements: ";
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
