// use of anyof function
#include<bits/stdc++.h>
using namespace std;
bool ans(int x){
    return x%2==0;
}
int main()
{
    vector<int> v={2,4,6};

    // lambda function
    // [](int x){return x>0;}

    // all_of function
    cout<<all_of(v.begin(),v.end(),[](int x){return x%2==0;})<<endl;
    cout<<all_of(v.begin(),v.end(),ans)<<endl;

    //any_of
    cout<<any_of(v.begin(),v.end(),[](int x){return x%2==0;})<<endl;
    cout<<any_of(v.begin(),v.end(),ans)<<endl;

    // none_of
    cout<<none_of(v.begin(),v.end(),[](int x){return x%2==0;})<<endl;
    cout<<none_of(v.begin(),v.end(),ans);
    return 0;
}
// 1
// 1
// 1
// 1
// 0
// 0