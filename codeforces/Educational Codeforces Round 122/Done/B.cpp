
#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ct0=0,ct1=0;
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                ct0++;
            }
            else{
                ct1++;
            }
        }
        if(ct1!=ct0){
            cout<<min(ct0,ct1)<<endl;
        }
        else{
            // if(s[0]=='0' && )
            cout<<ct0-1<<endl;
        }
        // 0101010
    }

	return 0;
}

