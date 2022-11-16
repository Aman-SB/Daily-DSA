#include <bits/stdc++.h>
using namespace std;
vector<int> spiral(vector<vector<int>> arr, int &row, int &col)
{
    vector<int> v;
    int left = 0, right = col - 1;
    int top = 0, down = row - 1;
    int value = 0;
    while (left <= right && top <= down)
    {
        if (value == 0)
        {
            for (int i = left; i <= right; i++)
            {
                int x = arr[top][i];
                v.push_back(x);
            }
            top += 1;
        }
        else if (value == 1)
        {
            for (int i = top; i <= down; i++)
            {
                int x = arr[i][right];
                v.push_back(x);
            }
            right -= 1;
        }
        else if (value == 2)
        {
            for (int i = right; i >= left; i--)
            {
                int x = arr[down][i];
                v.push_back(x);
            }
            down -= 1;
        }
        else if (value == 3)
        {
            for (int i = down; i >= top; i--)
            {
                int x = arr[i][left];
                v.push_back(x);
            }
            left += 1;
        }
        value = (value + 1) % 4;
    }
    return v;
}

int main()
{
    int row, col;
    cin >> row >> col;
    vector<vector<int>> arr(row);
    for (int i = 0; i < row; i++)
    {
        arr[i].assign(col, 0);
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    vector<int> v = spiral(arr, row, col);
    for (auto &it : v)
    {
        cout << it << " ";
    }
    return 0;
}
// row-3
// col-4
// natrix-1 2 3 4
//        5 6 7 8
//        9 10 11 12
// output-
// 1 2 3 4 8 12 11 10 9 5 6 7