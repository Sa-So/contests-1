
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n ;
    cin>>n;

    int A[n];

    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    // string str[10]
        int xori = 0;
    for(int i=0;i<n;i++){
        // cin>>A[i];
        int temp = A[i];
        int len = 4;
        int xor_l = 0;
        if(i!=0){
            // cout<<" "<<xor_l;
             xor_l = (A[i-1])^(A[i]);
            xori = max(xor_l,xori);
        }

        string s = "";
        while(temp && len>0){
            s=to_string(temp&1)+s;
            temp>>=1;
            len--;
        }
        // if(len>0){
            while(len){
                s="0"+s;
                len--;
            }
        // }

        // 1000
        // 1001
        // 1110
        // 0001
        // max xor will occur at a location where!!!
        // highest bit 

        cout<<s;
        if(i!=0){
            cout<<" "<<xor_l;
        }
        cout<<endl;
    }
    cout<<xori<<endl;


	return 0;
}


