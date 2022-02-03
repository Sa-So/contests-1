// https://www.geeksforgeeks.org/heaps-algorithm-for-generating-permutations/
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int ni = x-y;
        // ni--;
            int ans=2;
            ans+=ni;
            ans+=2*(y-1);
            // cout<<ans<<endl;
        if(ni>0){
            cout<<ans<<endl;
        }
        else{
            cout<<ans-1<<endl;
        }
    }
}
