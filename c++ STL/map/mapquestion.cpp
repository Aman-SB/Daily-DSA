#include<bits/stdc++.h>
using namespace std;
string sortSentence(string s) {
        map<int, string> mp;
        string cur = "";
        for (char c: s) {
            if (c == ' ' && cur != "") {
                string ncur = cur;
                char id = ncur.back();
                int idx = (id - '0');
                ncur.pop_back();
                mp[idx] = ncur;
                cur = "";
            }
            else 
                cur += c;
        }
        if (cur != "") {
                string ncur = cur;
                char id = ncur.back();
                int idx = (id - '0');
                ncur.pop_back();
                mp[idx] = ncur;
        }
    
        string ans = "";
        for (auto p: mp) {
            ans += p.second;
            ans += " ";
        }
        if (ans.back() == ' ')
            ans.pop_back();
        return ans;
    }

int main(){
    string s="a15b52c19";
    
    sortSentence(s)
    return 0;
}