// https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/

#include <bits/stdc++.h>
using namespace std;
int max(int x, int y) {
   return (x > y) ? x : y;
}
int knapSack(int W, int w[], int v[], int n) {
   int i, wt;
   int K[n + 1][W + 1];
   for (i = 0; i <= n; i++) {
      for (wt = 0; wt <= W; wt++) {
         if (i == 0 || w==0)
         K[i][wt] = 0;
         else if (w[i - 1] <= wt)
            K[i][wt] = max(v[i - 1] + K[i - 1][wt - w[i - 1]], K[i - 1][wt]);
         else
        K[i][wt] = K[i - 1][wt];
      }
   }
   return K[n][W];
}
int main() {
	// your code goes here
    // 1 => 2
    // 2 => 4
    // 4+1 => 5
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int B[n];
        for(int i=0;i<n;i++){
            cin>>B[i];
        }
        int C[n];
        for(int i=0;i<n;i++){
            cin>>C[i];
        }
        vector<int>A(n,1);
        // A[i]=B[i] => C[i]
        // k operations 
        // for max increase of A[i] x=1
        // + A[i]
        // + A[i]/2 => lower_bound==floor
        // + A[i]/3
        // + A[i]/x x=A[i] +1
        vector<int> cost(1001,INT_MAX);
        int steps = 0;
        // cost[0]=0;
        cost[1]=1;
        cost[2]=2;
        // cost[3]=2;
        // cost[4]=2;
        // cost[5]=3;
        // // 4 + 1 + 1 => 4
        // cost[6]=3;
        // // 4 / 3 => 1,2,4
        // cost[7]=4;
        // cost[8]=3;

        // 1 to 8 
        for(int i=1;i<=1000/2;i++){
            if(cost[i]!=0){
                int loc = i;
                int steps = cost[i];
                // in 1 step we can goto all of the loc + loc/x
                for(int i=1;i<=loc;i++){
                    // if(cost[loc +(loc/i)]==0)
                    cost[loc+(loc/i)]=min(steps+1,cost[loc+(loc/i)]);
                }
            }
        }
        // k 
        // do we max the no. of loc that have b[i]
        // do we try and make the ith loc with most amount of reward to be correct
        int D[n];//weights 
        for(int i=0;i<n;i++){
            D[i]=cost[B[i]]-1;
            // cout<<D[i]<<" ";

        }
        // cout<<endl;
        cout << knapSack(k, D, C, n) <<endl;
        // knapsack => weight of the knapsack bag = k
        //
        // do we max knapsack ????
        // for(int i=0;i<1000;i++){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<1000;i++){
        //     cout<<cost[i]<<" ";
        // }
        // cout<<endl;

    }

	return 0;
}

