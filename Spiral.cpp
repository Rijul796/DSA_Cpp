#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

// // Function to print a matrix in spiral order
// void spiralPrint(int m, int n, int **matrix) {
//     int top = 0, bottom = m - 1, left = 0, right = n - 1;

//     while (top <= bottom && left <= right) {
//         // Print top row
//         for (int i = left; i <= right; i++) {
//             cout << matrix[top][i] << " ";
//         }
//         top++;

//         // Print right column
//         for (int i = top; i <= bottom; i++) {
//             cout << matrix[i][right] << " ";
//         }
//         right--;

//         // Print bottom row, if any
//         if (top <= bottom) {
//             for (int i = right; i >= left; i--) {
//                 cout << matrix[bottom][i] << " ";
//             }
//             bottom--;
//         }

//         // Print left column, if any
//         if (left <= right) {
//             for (int i = bottom; i >= top; i--) {
//                 cout << matrix[i][left] << " ";
//             }
//             left++;
//         }
//     }
// }

// int main() {
//     int m, n;
//     cout << "Enter the number of rows and columns: ";
//     cin >> m >> n;

//     // Declare and initialize the matrix with dynamic allocation
//     int **matrix = new int*[m];
//     for (int i = 0; i < m; i++) {
//         matrix[i] = new int[n];
//     }

//     cout << "Enter the matrix elements:\n";
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> matrix[i][j];
//         }
//     }

//     cout << "\nSpiral print of the matrix:\n";
//     spiralPrint(m, n, matrix);

//     // Free the dynamically allocated memory
//     for (int i = 0; i < m; i++) {
//         delete[] matrix[i];
//     }
//     delete[] matrix;

//     return 0;
// }

int main()
{
    int row, column;
    cout << "enter rows and columns: ";
    cin >> row >> column;
    int arr[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<"the spiral is: "<<endl;
    int top = 0, bottom = row - 1, right = column - 1, left = 0;
    while (top <= bottom && left<=right)
    {
        for (int i = left; i <= right; i++)
        {
            cout << arr[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][right] << " ";
        }
        right--;
        if (left<=right)
        {
            for (int i = right; i>=left ; i--)
            {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }
        if(top<=bottom)
        {
            for (int i = bottom; i >=top ; i--)
            {
                cout<<arr[i][left]<<" ";
            }
            left++;
        }
    }
}
/*
1  2  3  4  5 
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9*/