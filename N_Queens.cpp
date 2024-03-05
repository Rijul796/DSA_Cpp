#include<bits/stdc++.h>
using namespace std;

bool check(int board[][20], int n, int i, int j)
{
    for (int k = 0; k < i; k++)
    {
        if (board[k][j] == 1)
        {
            return false;
        }
    }
    int x = i;
    int y = j;
    while (x >= 0 && y >= 0)
    {
        if (board[x][y] == 1)
        {
            return false;
        }
        x--;
        y--;
    }

    x = i;
    y = j;
    while (x >= 0 && y < n) // Corrected condition y < n
    {
        if (board[x][y] == 1)
        {
            return false;
        }
        x--;
        y++;
    }
    return true;
}

void print(int board[][20], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
}

bool nqueen(int board[][20], int n, int i)
{
    //base case
    if (i == n)
    {
        print(board, n);
        return true;
    }
    for (int j = 0; j < n; j++)
    {
        if (check(board, n, i, j))
        {
            board[i][j] = 1;
            bool success = nqueen(board, n, i + 1);
            if (success)
            {
                return true;
            }
            board[i][j] = 0;
        }
    }
    return false;
}

int main()
{
    int board[20][20] = {0};
    int n;
    cin >> n;
    nqueen(board, n, 0);
    return 0;
}
