
#include <bits/stdc++.h>
using namespace std;
bool will_win(long long hc , long long dc , long long hm,long long dm){
    // first we hit !!
    long long hits = hm/dc;
    long long hits_m = hc/dm;
    long long rem_hits = hm%dc;
    long long rem_hits_m = hc%dm;

    if(rem_hits!=0){
        hits+=1;
    }
    if(rem_hits_m!=0){
        hits_m+=1;
    }


    if(hits_m<hits){
        return false;

    }
    else if(hits<hits_m){
        return true;
    }
    else{
        return true;
    }
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long hc,dc;
        cin>>hc>>dc;
        long long hm,dm;
        cin>>hm>>dm;
        long long k,w,a;
        cin>>k>>w>>a;
        // if(will_win(hc,dc,hm,dm)){
        //     cout<<"YES"<<endl;
        // }
        // else{
            // if we spend i coins on health
            // k-i coins on damage !!!
            bool flag = false;
            for(int i=0;i<=k;i++){
                if(will_win(hc+(i*a),dc+((k-i)*w),hm,dm)){
                    flag = true;
                    break;
                }
            }
            if(flag){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        // }        
        // long long max_w = k*w;
        // long long max_a = k*a;


    }

	return 0;
}

