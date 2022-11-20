// N Queens
#include <bits/stdc++.h>
using namespace std;
// checking function is there in any other queens or not
bool isSafe(int row, int col, vector<string> &board, int n)
{
    // upper diagonal
    int dupRow = row;
    int dupCol = col;
    while (row >= 0 && col >= 0)
    {
        if (board[row][col] == 'Q')
        {
            return false;
        }
        row--;
        col--;
    }

    // check back column

    row = dupRow;
    col = dupCol;
    while (col >= 0)
    {
        if (board[row][col] == 'Q')
        {
            return false;
        }
        col--;
    }

    // check the lower diagonal
    row = dupRow;
    col = dupCol;
    while (row < n && col >= 0)
    {
        if (board[row][col] == 'Q')
        {
            return false;
        }
        col--;
        row++;
    }
    return true;
}
// this function is for putting Queen in a position
void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n)
{
    if (col == n)
    {
        ans.push_back(board);
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            board[row][col] = 'Q';
            solve(col + 1, board, ans, n);
            board[row][col] = '.';
        }
    }
}
// main funtion
vector<vector<string>> solveNQueens(int n)
{
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n, '.');
    for (int i = 0; i < n; i++)
    {
        board[i] = s;
    }
    solve(0, board, ans, n);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<string>> ans;
    ans = solveNQueens(n);
    for (auto val : ans)
    {
        for (auto it : val)
        {
            cout<<it<<endl;
        }
        cout<<endl;
    }
}
// input - 4
// output - 
// ..Q.
// Q...
// ...Q
// .Q..

// .Q..
// ...Q
// Q...
// ..Q.