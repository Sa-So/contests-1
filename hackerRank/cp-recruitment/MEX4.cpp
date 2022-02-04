// i never used but should have read atleast :-
// https://www.geeksforgeeks.org/maximum-mex-from-all-subarrays-of-length-k/
// hackerearth 404 img  : https://xkcd.com/license.html
// I should definitely build an ai to write code for me 
// https://deepmind.com/blog/article/Competitive-programming-with-AlphaCode

#include <bits/stdc++.h>

using namespace std;
int main() {

    // 1/7
    // maximum mex smallest length !
    // subarray
    // int n;
    // cin>>n;
    // i

    int n;
    cin>>n;
    int A[n];
    // int mexi[n];
    vector<bool> maxi(n+1,false);
    // y n+1 =>
    // N => 3=> 0 1 2 3
    // max mex ?
    // we can see that max mex is the mex of the whole array 
    for(int i=0;i<n;i++){
        cin>>A[i];
        if(A[i]<=n){
            maxi[A[i]]=true;
        }
    }
    // subarray => 1 2 4 0 5 
    int ans ;// mex
    for(int i=0;i<=n;i++){
        if(maxi[i]==false){
            ans = i;
            break;
        }
    }
    // cout<<ans<<endl;
    // subarray of least length having that mex ??
    // subarray is an array made after deleting one or more elements
    // from the start & ending of the array
    int len = n;
    // 5 we can remove 
    for(int i=0;i<n;i++){
        if(A[i]>ans){
            len--;
        }
        else{
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(A[i]>ans){
            len--;
        }
        else{
            break;
        }
    }
    // since 2*n => len = n len--
    //  mex is 0 len sub = 0
    if(len == 0){
        cout<<1<<endl;
    }
    else if(ans == n){
        cout<<n<<endl;
    }
    else{
    cout<<len<<endl;
    }

    // int pre_mex[n],suf_mex[n];
    // for(int i=0;i<n;i++){

    // }
    // int ans = 0;
    // for(int i=0;i<n;i++){
    //     if(A[i]>=x){
    //         ans=i+1;
    //         break;
    //     }
    // }
    // if(ans == 0){
    //     cout<<"Impossible"<<endl;
    // }
    // else{
    //     cout<<ans<<endl;
    // }
    // how is soumil so pro at everything ?
    // https://codeforces.com/submissions/soumilaggarwal/contest/1549
    // what does skipped mean on codeforces ?
    // pls cure my ocd 
    // this book is great : https://nostarch.com/automatestuff2
  
}
