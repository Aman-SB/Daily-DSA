#include <bits/stdc++.h>
using namespace std;
void printmap(map<int, string> m)
{
    cout << "size" << m.size() << endl;
    for (auto &it : m)
    { // nlog(n)
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
}
int main()
{
    map<int, string> m;
    m[1] = "abc"; // T.C-(O(log(N)))
    m[5] = "mdw";
    m[3] = "dknl";
    m.insert({4, "akjd"});

    auto it = m.find(3);
    // find operator return the iterator in which the value is present
    //  find = O(log(n))
    // if(it == m.end()){
    //     cout<<"NO VALUE";
    // }
    // else{
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    // output- 3 dknl

    // m.erase(3);
    // erase take two thing one the key value or second the iterators
    if(it != m.end())       //for the safe operation of the erase we use if 
        m.erase(it);
    //  output-
    //  size3
    // 1 abc
    // 4 akjd
    // 5 mdw


    m.clear();
    printmap(m);

    return 0;
}