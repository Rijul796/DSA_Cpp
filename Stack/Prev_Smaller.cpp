#include <bits/stdc++.h>
using namespace std;

vector<int> prevSmaller(vector<int>& arr, int n) {
    stack<int> s;
    vector<int> ans(n, -1);
    for (int i = 0; i < n; i++) {
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
    vector<int> ans = prevSmaller(v, n);
    cout << "Previous smaller elements: ";
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
