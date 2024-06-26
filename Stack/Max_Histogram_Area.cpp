#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(const vector<int>& arr) {
    int n = arr.size();
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i = n - 1; i >= 0; i--) {
        int curr = arr[i];
        while(!s.empty() && s.top() != -1 && arr[s.top()] >= curr) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
    
vector<int> prevSmallerElement(const vector<int>& arr) {
    int n = arr.size();
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i = 0; i < n; i++) {
        int curr = arr[i];
        while(!s.empty() && s.top() != -1 && arr[s.top()] >= curr) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans; 
}
    
int largestRectangleArea(const vector<int>& heights) {
    int n = heights.size();
    
    vector<int> next = nextSmallerElement(heights);
    vector<int> prev = prevSmallerElement(heights);
    
    int area = INT_MIN;
    for(int i = 0; i < n; i++) {
        int l = heights[i];
        
        if(next[i] == -1) {
            next[i] = n;
        }
        int b = next[i] - prev[i] - 1;
        int newArea = l * b;
        area = max(area, newArea);
    }
    return area;
}

int main() {
    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int maxArea = largestRectangleArea(heights);
    cout << "The largest rectangle area is: " << maxArea << endl;
    return 0;
}
