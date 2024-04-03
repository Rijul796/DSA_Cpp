#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
private:
    bool knows(vector<vector<int>>& M, int a, int b) {
        return M[a][b] == 1;
    }

public:
    int celebrity(vector<vector<int>>& M, int n) {
        stack<int> s;
        // Step 1: push all elements onto the stack
        for (int i = 0; i < n; i++) {
            s.push(i);
        }

        // Step 2: compare pairs of elements until only one remains
        while (s.size() > 1) {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();

            if (knows(M, a, b)) {
                s.push(b);
            } else {
                s.push(a);
            }
        }

        int candidate = s.top();

        // Step 3: Verify if the candidate is a celebrity
        int zeroCount = 0;
        for (int i = 0; i < n; i++) {
            if (M[candidate][i] == 0)
                zeroCount++;
        }

        if (zeroCount != n)
            return -1;

        int oneCount = 0;
        for (int i = 0; i < n; i++) {
            if (M[i][candidate] == 1)
                oneCount++;
        }

        if (oneCount != n - 1)
            return -1;

        return candidate;
    }
};

int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    while (t--) {
        int n;
        cout << "Enter the size of the matrix: ";
        cin >> n;
        
        if (n <= 0) {
            cout << "Invalid matrix size. Please enter a positive integer." << endl;
            continue;
        }

        vector<vector<int>> M(n, vector<int>(n, 0));
        cout << "Enter the elements of the matrix:" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }

        Solution ob;
        int celebrityIndex = ob.celebrity(M, n);
        if (celebrityIndex == -1) {
            cout << "No celebrity found" << endl;
        } else {
            cout << "Celebrity found at index: " << celebrityIndex << endl;
        }
    }

    return 0;
}
