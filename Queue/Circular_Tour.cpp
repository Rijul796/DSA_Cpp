#include<bits/stdc++.h>
using namespace std;

int tour(int petrol[], int distance[], int n) {
    int start = 0; // Starting index of the tour
    int deficit = 0; // Track the deficit if the truck cannot complete the tour
    int balance = 0; // Track the balance of petrol

    for (int i = 0; i < n; i++) {
        balance += petrol[i] - distance[i]; // Update balance

        // If the balance becomes negative, reset starting point and update deficit
        if (balance < 0) {
            start = i + 1;
            deficit += balance;
            balance = 0;
        }
    }

    // If the balance plus deficit is non-negative, it means the tour is possible
    if (balance + deficit >= 0) 
        return start;
    else
        return -1; // Otherwise, return -1 indicating no possible tour
}

int main() {
    int n;
    cin >> n;
    int petrol[n], distance[n];
    for (int i = 0; i < n; i++)
        cin >> petrol[i] >> distance[i];
    cout << tour(petrol, distance, n) << endl;
    return 0;
}
