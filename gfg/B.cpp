long long solve(int N,int K,int A[])
    {
        // add your code here
        // 1 2 3 4
        // 1     4 
        // x +- 1,3,5,7..
        // k jumps.
        // let's say u can jump at any loc
        // k+1 largest numbers == upper limit
        // k-1 smallest numbers == lower limit
        // at max k different places.
        // greedy won't work , dp
        //  ,     ,     , , 
        // can we avoid going left ??? +7 != +5 +1
        
        // starting should also be optimal to reach certain places.
        // long long dp[N];
        // start at i , end at j ?
        //188
        
        vector<long long> odd,even;
        long long sumi = 0;
        for(int i=0;i<N;i++){
           if(i%2==0){
               even.push_back(A[i]);
            //   cout<<A[i]<<" ";
           }
           else{
                odd.push_back(A[i]);  
           }
           sumi+=A[i];
        }
        // for(auto &it:even){
        //     cout<<it<<" ";
            
        // }
        // cout<<endl;
        // for(auto &it:odd){
        //     cout<<it<<" ";
            
        // }
        // cout<<endl;
        // cout<<"sum:"<<sumi<<endl;
        if(K==N-1){
            return sumi;
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        reverse(odd.begin(),odd.end());
        reverse(even.begin(),even.end());
        
        // for(auto &it:even){
        //     cout<<it<<" ";
            
        // }
        // cout<<endl;
        
        // for(auto &it:odd){
        //     cout<<it<<" ";
            
        // }
        // cout<<endl;
        // 192 aana chahiye.
        
        // we can take one odd & one even
        // 5 5 
        long long ans = 0;
        int oi=0,ei=0;
        if(odd[oi]>even[ei]){
            ans+=odd[oi];
            oi++;
        }
        else{
            ans+=even[ei];
            ei++;
        }
        // n is even => 0 1 2 3
        // n is ddd => 0 1 2 => more evens
        // start from odd -> even -> odd
        // exp 122
        // 97
        if(ei>0){
            for(int i=0;i<K;){
                ans+=odd[oi];
                oi++;
                i++;
                if(i>=K){
                    break;
                }
                ans+=even[ei];
                ei++;
                i++;
                if(i>=K){
                    break;
                }
            }
        }
        else{
            for(int i=0;i<K;){
                
                ans+=even[ei];
                ei++;
                i++;
                if(i>=K){
                    break;
                }
                ans+=odd[oi];
                oi++;
                i++;
                if(i>=K){
                    break;
                }
    
            }
        }
        
        
        return ans;
    }
};
