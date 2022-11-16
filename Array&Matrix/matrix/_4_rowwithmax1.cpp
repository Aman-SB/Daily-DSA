#include <bits/stdc++.h>
using namespace std;
int rowwithmax1(vector<vector<int>> &arr, int &n, int &m)
{
    int i = 0, j = m - 1;
    int row = -1;
    while (i < n && j >= 0)
    {
        if (arr[i][j] == 1)
        {
            j = j - 1;
            row = i;
        }
        else
        {
            i++;
        }
    }
    return row;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    cout << rowwithmax1(v, n, m);
    return 0;
}
// row - 4
// col - 4
// 0 1 1 1
// 0 0 1 1
// 1 1 1 1
// 0 0 0 0
// max row with 1 - 2