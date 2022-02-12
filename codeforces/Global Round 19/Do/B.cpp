#include <bits/stdc++.h>
using namespace std;
// int fun(vector<int> A,int i,int j,int n){
//     if(i==j){
//         if(A[i]==0){
//             return 2;
//         }
//         return 1;
//     }
//     else{
//         // 1 + mex(A,i,j)
//         return max(fun(A,i+1,j,n),fun())
//     }
// }
// int mex(vector<int> A,int i,int j,int n){
//     // mex of a subsegment will
// }
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n,0);
        vector<int> C(n+1,0),D(n+1,0),E(n+1,0),F(n+1,0);
        // B(n,0);
        // no. of subsegments 
        // int n_of_s = n*(n-1)/2;
        vector<int> costi;

        for(int i=0;i<n;i++){
            cin>>A[i];
            // B[i]=A[i];
            if(A[i]<=n){
                C[A[i]]++;
                D[A[i]]++;
                E[A[i]]++;
                F[A[i]]++;

            }
        }
        int gmex = -1;
        for(int i=0;i<=n;i++){
            if(C[i]==0){
                gmex=i;
                break;
            }
        }

        // subsegments can be made
        // deleting from front & end

        // 0 -> 0,1,2
        // long long cost = 1 + gmex;
        int cost = 0;
        // will ther be overlap ????
        // when we are at 0 we are removing it 
        // we should also take a case where we donot remove even 0 
        

        // i am not making subsegemnts recursively 
        // if subsegment of a s has same mex then i can add 1 to it 


        // for every different i gmex will change 
        int temp_mex = gmex;
        for(int i=-1;i<n-1;i++){
            // at i = 0 
            // >=i or >i ???????
            if(i>=0 && A[i]<gmex){
                C[A[i]]--;
                D[A[i]]--;
                    if(C[A[i]]==0){
                        gmex=A[i];
                    }
                    else{
                        cost++;

                    }
                    // else{

                    // }
                    // gmex=A[j];
            }
            // else if(i>=0){
            //     cost++;
            // }
            int i_mex = gmex;

            for(int j=n;j>i+1;j--){
                // cost+=fun(A,i,j,n);
                if(j<n && A[j]<gmex){
                    D[A[j]]--;
                    if(D[A[j]]==0){
                        // we actually have to subtract 
                        // but after we are done we need to revert it back to original 

                        gmex=A[j];
                    }
                    else{
                        cost++;
                    }
                    // else{

                    // }
                    // gmex=A[j];
                }
                else if(j<n){
                    cost++;
                }
                // if we partition this segment 
                //
                // cout<<1+gmex<<" "; 
                cost += 1 + gmex ;
                cout<<cost<<" ";
                costi.push_back(cost);
                cost=0;
                // when i == j

                // if partioning results in more cost

            }
            gmex = i_mex;
            // fine 
            for(int i=0;i<n+1;i++){
                D[i]=C[i];
            }

        }
        // 0 2,1 =>  1,2
        int k=0;
        gmex = temp_mex;
        // double chekc coz order matters
        for(int i=n;i>0;i--){
            // at i = 0 
            // >=i or >i ???????
            if(i<n && A[i]<gmex){
                E[A[i]]--;
                F[A[i]]--;
                    if(E[A[i]]==0){
                        gmex=A[i];
                    }
                    else{
                        cost++;
                    }
                    // else{

                    // }
                    // gmex=A[j];
            }
            // else if(i<n){
            //     cost++;
            // }
            int i_mex = gmex;

            for(int j=-1;j<i-1;j++){
                // cost+=fun(A,i,j,n);
                if(j>=0 && A[j]<gmex){
                    F[A[j]]--;
                    if(F[A[j]]==0){
                        // we actually have to subtract 
                        // but after we are done we need to revert it back to original 

                        gmex=A[j];
                    }
                    else{
                        cost++;
                    }
                    // else{

                    // }
                    // gmex=A[j];
                }
                else if(j>=0){
                    cost++;
                }
                // if we partition this segment 
                //
                // cout<<1+gmex<<" "; 
                cost += 1 + gmex ;
                cout<<cost<<" ";
                // cost.push_back(cost);
                costi[k]=max(costi[k],cost);
                k++;
                cost=0;
                // when i == j

                // if partioning results in more cost

            }
            gmex = i_mex;
            // fine 
            for(int i=0;i<n+1;i++){
                F[i]=E[i];
            }

        }
        long long sumi = 0;
        for(int i=0;i<costi.size();i++){
            sumi+=costi[i];
        }
        cout<<endl;
        cout<<sumi<<endl;
        // return cost;
        // for every subsegment find max cost 
        // of partition !!!!
        // st. the mex stays gmex
        // 1 + mex => reduce 
        //  


    }
}
