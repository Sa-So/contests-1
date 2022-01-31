#include<bits/stdc++.h>
using namespace std;
int calc(string a,string b){
	int n = a.length();
	int ans =0;
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			ans++;
		}
	}
	return ans; // diff count
}
int main(){
	int t;
	cin>>t;
	vector<string> sev_mul;
	for(int i=14;i<100;i+=7){
		sev_mul.push_back(to_string(i));
	}
	vector<string> sev_mul2;
	for(int i=105;i<1000;i+=7){
		sev_mul2.push_back(to_string(i));
	}
	while(t--){
		int n;
		cin>>n;
		// int temp1 = n%10;
		// int temp = n/10;
		// int dif = abs(temp - 2*temp1);

		// if(dif%7==0){
		// 	cout<<n<<endl;
		// }
		// else{
		// 		int last = temp % 7 ;
		// 		if(last % 2 == 0){
		// 			cout<<temp<<" "<<last/2<<endl;
		// 		} 
		// 		else{
		// 			cout<<"oh";
		// 		}
		// }

		if(n%7==0){
			cout<<n<<endl;
		}
		else{
			string temp = to_string(n);
			int size = temp.length();
			if(size==1){
				cout<<7<<endl;
			}
			else if(size==2){
				int maxi = 2;
				string ans = "77";
				for(int i=0;i<sev_mul.size();i++){
					int loc_maxi = calc(sev_mul[i],temp);
					if(loc_maxi<maxi){
						ans = sev_mul[i];
						maxi = loc_maxi;
					}

				}
				cout<<ans<<endl;
				
			}
			else{
				int maxi = 3;
				string ans = "777";
				for(int i=0;i<sev_mul2.size();i++){
					int loc_maxi = calc(sev_mul2[i],temp);
					if(loc_maxi<maxi){
						ans = sev_mul2[i];
						maxi = loc_maxi;
					}

				}
				cout<<ans<<endl;

			}
			// int rem = n%7 ;
			// int loc = n/10;
			// int ch = loc%10;

			// if( (rem + (n/10) )
		}

		
	}
}
