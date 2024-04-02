#include<bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> v;
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++) { 
        pq.push(v[i]);
    }
    int cost = 0;
    while (pq.size() > 1) {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        int combined = a + b;
        cost += combined;
        pq.push(combined);
    }
    cout << "The total cost is: " << cost << endl;
    return 0;
}
