// Interleave the first half
#include<bits/stdc++.h>
using namespace std;
void solve(queue<int>&q){
    stack<int> st;
    int n = q.size();
    int val = n/2;
    //pushing front element into stack
    while(val--){
        st.push(q.front());
        q.pop();
    }
    //pushing into queue to rearrange once again
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    //again pushing the queue element to back to bring front that element which we have to push
    val = n/2;
    while(val--){
        q.push(q.front());
        q.pop();
    }
    //pushed back into stack
    val = n/2;
    while(val--){
        st.push(q.front());
        q.pop();
    }
    // main
    while(!st.empty()){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
}
int main(){
    queue<int> q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    solve(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
// 8
// 1 2 3 4 5 6 7 8
// 1 5 2 6 3 7 4 8 