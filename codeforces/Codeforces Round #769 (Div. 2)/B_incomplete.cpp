
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int main() {
	// your code goes here
    int t;
    cin>>t;
    // int A[1e5][1e5];
    vector< vector<int> > pre_comp;
    // (N,vector<int>(N,0));



    while(t--){
        int n;
        cin>>n;
        // minimize the max xor 
        // mini max xor
        
        // 0 1 => 1
        // 1 0 => 1
        // 1 1 => 0
        // 0 0 => 0
        // most bits are same (set ones ?)
        // if all bits are same 
        // then there are duplicate no.s

        // 10 00 01

        // 000
        // 001
        // 010
        // 011
        // 100
        // 101
        // 110
        // 111
        //1000 
        // 011 010 001 000 100
        // optimizing at every step ???
        // 0 1 
        // 2 0 
        // 0 1
        // 2 0 1
        // n-1 ????
        // max xor is the max set bit in n-1
        int tempi=n-1;
        int ct = 0;
        int high = 0;
        while(tempi){
            if(tempi&1!=0){
                high = 1<<ct;
            }
            ct++;
            tempi>>=1;
        }
        cout<<"high : "<<high<<endl;
        // place hiigh with the similar gut
        int adj = n-1-high;


        // int mini = n-1;
        // int xori = 0;
        // for(int i=0;i<n-1;i++){
        //     mini = min((n-1)^(i),mini);

        //     // int xor_l = (i)^(i+1);
        //     // xori = max(xor_l,xori);
        // }
        // cout<<mini<<endl;
        // cout<<xori<<endl;
        for(int i=n-1;i>=0;i--){
            for(int j=i-1;j>=0;j--){
                if((i^j)<=high){
                    cout<<
                }
            }
        }

    }
	return 0;
}

