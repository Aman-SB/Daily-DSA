// Given an array of size n and a number k, find all elements that appear more than ” n/k ” times.
#include <bits/stdc++.h>
using namespace std;
void morethannbyk(vector<int> &v, int n, int k)
{
    int x = n / k;
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[v[i]]++;
    }
    for (auto &it : map)
    {
        if (it.second > x)
        {
            cout << it.first << " ";
        }
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    morethannbyk(v, n, k);
    return 0;
}
// 8 4
// 3 1 2 2 1 2 3 3
// output-
// 2 3