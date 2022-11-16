// Move all the negative element

#include <bits/stdc++.h>
using namespace std;
void move(vector<int> v, int n)
{
    vector<int> neg;
    vector<int> pos;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < 0)
        {
            int x = v[i];
            neg.push_back(x);
        }
        if (v[i] > 0)
        {
            int y = v[i];
            pos.push_back(y);
        }
    }
    v.clear();
    v.insert(v.begin(), neg.begin(), neg.end());
    v.insert(v.end(), pos.begin(), pos.end());
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    move(v, n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
// 9
// -12 11 -13 -5 6 -7 5 -3 -6
// output-
// -12 -13 -5 -7 -3 -6 11 6 5