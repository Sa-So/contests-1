// ORANDCON
#include <iostream>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int a,b,c;
        // 111000101
        // 110000000
        // 001000101
        // c=X
        // A,B
        // X 
        // > X
        // what if there are 1 bit set ???
        // 000 1000 1000
        int ct = 0;
        int tempi = x;
        while(tempi){
            tempi>>=1;
            ct++;
        }
        int temp = 1<<(ct+1);
        temp--;

        cout<<0<<" "<<x<<" "<<temp<<endl;
        // 3|4 => 111
        // 4|0=>100
        //011
        //11
    }
}
