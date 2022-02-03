#include <bits/stdc++.h>
using namespace std;
bool is_pali(string s){
    int n = s.length();
    bool flag = true;
    for(int i=0;i<n/2;i++){
        if(s[i]==s[n-i-1]){
            flag = false;
            break;
        }
    }
    return flag;
}
void heapPermutation(int a[], int size, int n)
{
    // if size becomes 1 then prints the obtained
    // permutation
    if (size == 1) {
        
        printArr(a, n);
        return;
    }
 
    for (int i = 0; i < size; i++) {
        heapPermutation(a, size - 1, n);
 
        // if size is odd, swap 0th i.e (first) and
        // (size-1)th i.e (last) element
        if (size % 2 == 1)
            swap(a[0], a[size - 1]);
 
        // If size is even, swap ith and
        // (size-1)th i.e (last) element
        else
            swap(a[i], a[size - 1]);
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n%2==1){
            cout<<"NO"<<endl;
        }
        else{
            // if occurance of any letter is > n/2 ?
            vector<int> ct(26,0);
            vecotr<pair<int,char> >chare;
            // n/2-1 x!=1
            // xxxy yzzz
            //n/2
            bool flg = true;
            for(int i=0;i<n;i++){
                if(ct[s[i]-'a']==n/2){
                    flg = false;
                    break;
                }
                else{
                    ct[s[i]-'a']++;
                }
                // chare
            }
            if(flg == false){
                cout<<"NO"<<endl;
            }
            else{
                int occur_char = 0;
                // int A[]
                for(int i=0;i<26;i++){
                    if(ct[i]>0){
                        occur_char++;
                    }
                }
                int A[occur_char];
                int k=0;
                for(int i=0;i<26;i++){
                    if(ct[i]>0){
                        A[k]=ct[i];
                        k++;
                        // occur_char++;
                    }
                }

                // generate perm 
                for(int i=0;i<n;i++){
                    
                    heapPermutation(A,occur_char!,occur_char);

                }


                // n/2 
                // 1 3 5 
                // 1,2,3,4,5 n/2 => n/2
                // if there are n/2 1's
                // if there are n/2-1 => 1
                // n/2-2 2c 1 1 1c 2
                //     bb|cc
                //      b|b

            }
            // sort(s.begin(),s.end());
            // if(is_pali(s)){
            //     cout<<"YES"<<endl;
            //     cout<<s<<endl;
            // }
            // else{
            //     cout<<"NO"<<endl;
            // }

        }

    }
}
