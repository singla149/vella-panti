/*input
vvovooovovvovoovoovvvvovovvvov
*/
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define N 500005
#define mod 998244353
 
int main() {
	string s;
	cin>>s;
	int n=s.length();
	vector<ll> left(n+2,0), right(n+2,0);
 
	left[0] = right[n+1] = 0;
 
	int prev =0;
	for(int i=1;i<=n;i++){
		int index = i-1;
		if(s[index] == 'o'){
			left[i] = left[i-1];prev = 0;continue;
		}
		prev++;
		if(prev>=2) left[i] =1 + left[i-1];
		else left[i] = left[i-1];
	}
	prev=0;
 
	for(int i=n;i>=1;i--){
		int index = i-1;
		if(s[index] == 'o'){
			right[i] = right[i+1];prev = 0;continue;
		}
		prev++;
		if(prev>=2) right[i] = 1 + right[i+1];
		else right[i] = right[i+1];
	}
 
	ll ans =0;
	for(int i=1;i<=n;i++){
		if(s[i-1] == 'o'){
			//cout<<i<<" "<<left[i]<<" "<<right[i]<<endl;
		ans+=left[i]*right[i];
	}
	}
	cout<<ans<<endl;
 
}
