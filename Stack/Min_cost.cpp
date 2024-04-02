#include <bits/stdc++.h>
using namespace std;

int mincost(string s) {
    int n = s.length();
    if (n % 2 != 0) {
        return -1; // If the length of the string is odd, it can't be balanced.
    }

    stack<char> st;
    for (int i = 0; i < n; i++) {
        char ch = s[i];
        if (ch == '(') {
            st.push(ch);
        } else {
            if (!st.empty() && st.top() == '(') {
                st.pop();
            } else {
                st.push(ch);
            }
        }
    }

    int a = 0, b = 0;
    while (!st.empty()) {
        if (st.top() == '(') {
            b++;
        } else {
            a++;
        }
        st.pop();
    }

    // Calculate the minimum number of operations required.
    int ans = (a + 1) / 2 + (b + 1) / 2;
    return ans;
}

int main() {
    string s;
    cout << "Enter string of brackets: " << endl;
    getline(cin, s);
    cout << mincost(s);
    return 0;
}
