/*input
8
babbaabb
abababaa
*/
#include "bits/stdc++.h"
#define ll long long
using namespace std;
#define pb push_back
int main()
{
	int n;
	cin>>n;
	string s1, s2;
	cin>>s1>>s2;
	vector<pair<int, int> > A, B;
	for(int i=0; i<n; i++) {
		if(s1[i] == s2[i]) continue;
		if(s1[i] == 'a') { // a->b
			A.pb(make_pair(i+1,i+1));
		} else {
			B.pb(make_pair(i+1,i+1));
		}
	}
	int n1 = A.size(), n2 = B.size();
	if((n1+n2)%2) {
		cout<<-1;return 0;
	}
	int ans = n1/2 + n2/2;
	if(n1%2) ans+=2;
	
	cout<< ans << endl;
	
	for(int i=0;i+1 <n1;i+=2) {
		cout<< A[i].first << " "<< A[i+1].first << endl;
	}
	for(int i=0;i+1 <n2;i+=2) {
		cout<< B[i].first << " " << B[i+1].first << endl;
	}
 
	if(n1%2) {
		cout<< A[n1-1].first <<" "<<A[n1-1].second <<endl;
 
		cout<< A[n1-1].first << " " << B[n2-1].second <<endl;
	}
 
 
}
