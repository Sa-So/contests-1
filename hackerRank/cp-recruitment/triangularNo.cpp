// 30 days of code : https://www.hackerrank.com/challenges/30-hello-world/problem
// https://inventwithpython.com/
// learn dom manipulation : https://www.youtube.com/watch?v=wiozYyXQEVk
// ^^ and create a todo list app
// learn knapsack & figure out y this doesn't work : https://codeforces.com/contest/1633/problem/D
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    vector<int> tr;
    for(int i=0;i<1e3;i++){
        tr.push_back((i*(i+1))/2);
    }
    // for(auto &x:tr){
    //     cout<<(x)<<" ";
    // }
    // cout<<endl;
    vector<bool> num(1e6,false);
    for(int i=0;i<tr.size();i++){
        num[tr[i]]=true;
    }
    vector<int> pre(1e6,0);
    int numb_till_now = 0;
    pre[0]=0;
    for(int i=1;i<1e6;i++){
        // if(num[i]){
        //     numb_till_now++;
        // }
        pre[i]=pre[i-1]+num[i];
        // pre[i]=numb_till_now;
    }

    while(t--){
        int l,r;
        cin>>l>>r;
        cout<<pre[r]-pre[l-1]<<endl;

    }
}
