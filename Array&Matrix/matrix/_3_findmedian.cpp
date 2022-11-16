
#include <bits/stdc++.h>
using namespace std;

int median(vector<vector<int>> &m, int r, int c)
{
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (int i = 0; i < r; i++)
    {
        if (m[i][0] < mini)
            mini = m[i][0];

        if (m[i][c - 1] > maxi)
            maxi = m[i][c - 1];
    }
    int desired = (r * c + 1) / 2;
    while (mini < maxi)
    {
        int mid = mini + (maxi - mini) / 2;
        int place = 0;
        for (int i = 0; i < r; i++)
        {
            auto newupp = 
            place += upper_bound(m[i].begin(), m[i].begin() + c, mid) - m[i].begin();
            if (place < desired)
                mini = mid + 1;
            else
                maxi = mid;
        }
    }
    return maxi;
}

int main()
{

    int r, c;
    cin >> r >> c;
    vector<vector<int>> matrix(r, vector<int>(c));
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> matrix[i][j];

    cout << median(matrix, r, c) << endl;

    return 0;
}
// 3 3
// 1 3 5 2 6 9 3 6 9
// 5
