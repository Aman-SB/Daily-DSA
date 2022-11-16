// celebrity Problem
#include<bits/stdc++.h>
using namespace std;
bool knows(vector<vector<int> >& v,int a,int b)
{
    if(v[a][b] == 1)
        return true;
    else
        return false;
}
int celebrity(vector<vector<int> >& v, int n) {
    stack<int> st;

    for(int i=0;i<n;i++){
        st.push(i);
    }

    while(st.size() > 1)
    {
        int a = st.top();
        st.pop();

        int b = st.top();
        st.pop();

        if(knows(v,a,b))
        {
            st.push(b);
        }
        else
        {
            st.push(a);
        }
    }
    int ans = st.top();
    // check
    int zeroCount = 0;
    int oneCount = 0;
    for(int i=0;i<n;i++)
    {
        if(v[ans][i] == 0)
        {
            zeroCount++;
        }

        if(v[i][ans] == 1)
        {
            oneCount++;
        }
    }
    if(zeroCount != n && oneCount != n-1 )
    {
        return -1;
    }

    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v(n, vector<int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    int ans = celebrity(v,n);
    cout<<ans;
    return 0;
}
// n =3
// matrix of people - 
// 0 1 0
// 0 0 0
// 0 1 0
// output -
// 1