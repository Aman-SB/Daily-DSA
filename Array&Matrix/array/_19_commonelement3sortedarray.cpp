#include <bits/stdc++.h>
using namespace std;
vector<int> commonelement(int a[], int b[], int c[], int n1, int n2, int n3)
{
    // first approach
    // TC-O(n1+n2+n3)
    // SC-O(n1+n2+n3)
    unordered_map<int, int> m1, m2, m3;
    for (int i = 0; i < n1; i++)
        m1[a[i]]++;
    for (int j = 0; j < n2; j++)
        m2[b[j]]++;
    for (int k = 0; k < n3; k++)
        m3[c[k]]++;
    vector<int> v;
    for (int i = 0; i < n1; i++)
    {
        if (m1[a[i]] && m2[a[i]] && m3[a[i]])
        {
            v.push_back(a[i]);
            m1[a[i]] = 0;
        }
    }
    if (v.size() == 0)
        return {-1};
    else
        return v;

    /*  //second approach
     // TC-O(n1+n2+n3)
     // SC-O(1)
     int i=0,j=0,k=0;
     vector<int> v;
     while(i<n1 && j<n2 && k<n3){
         if(a[i]==b[j] && b[j]==c[k]){
             v.push_back(a[i]);
             i++;
             j++;
             k++;
         }
         else if(a[i]<b[j])  i++;
         else if(b[j]<c[k])  j++;
         else k++;
         int x=a[i-1];
         while(a[i]==x)  i++;
         int y=b[j-1];
         while(b[j]==y)  j++;
         int z=c[k-1];
         while(c[k]==z)  k++;
     }
     if(v.size()==0) return {-1};
     else return v; */
}
int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int a[n1], b[n2], c[n3];
    for (int i = 0; i < n1; i++)
        cin >> a[i];
    for (int j = 0; j < n2; j++)
        cin >> b[j];
    for (int k = 0; k < n3; k++)
        cin >> c[k];

    vector<int> v = commonelement(a, b, c, n1, n2, n3);
    for (auto &it : v)
    {
        cout << it << " ";
    }
    return 0;
}
// 6 5 8
// 1 5 10 20 40 80
// 6 7 20 80 100
// 3 4 15 20 30 70 80 120
// output-
// 20 80