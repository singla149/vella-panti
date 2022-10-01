/*input
3
2
4
200
*/
#include "bits/stdc++.h"
using namespace std;
#define pb push_back
#define mod 998244353
#define int long long
#define N 200005
#define PI 3.14159265358979323846264338327950288419716939937510582097494459230781640
 
signed main()
{
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int sides= (2*n -4)/4;
		double inc = PI/2.0;
		inc/=(sides+1);
		double ang = inc;
		double ans = 1;
		for(int i=0;i<sides;i++)
			{ans+=2*cos(ang);
			ang += inc;}
 
		cout<<setprecision(12) <<ans<<endl;
	}
}
