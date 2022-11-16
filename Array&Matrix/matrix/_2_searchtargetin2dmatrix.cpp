#include <bits/stdc++.h>
using namespace std;
bool findtarget(vector<vector<int>> &arr, int target)
{
    int row = arr.size();
    int col = arr[0].size();
    int start = 0;
    int end = row * col - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int ele = arr[mid / col][mid % col];
        if (ele == target)
        {
            return true;
        }
        else if (ele > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return false;
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
    int target;
    cin >> target;
    if (findtarget(arr, target) == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}
// row-3
// col-4
// matrix-1 3 5 7
//        11 13 15 17
//        19 21 23 25
// target-3
// output-
// Yes
