/*
You are walking down the escalator to catch a subway train. The escalator itself
moves at a speed of Ve meters per minute. You can walk down the escalator at a
relative speed of Vy meters per minute. The length of the escalator is L meters.
Trains arrive T minutes apart. Let t be the time between your arrival to the station
if you stand still on the escalator and the arrival of the last train before your arrival.
Assume that t is a random variable uniformly distributed between 0 and T. Return the
probability of catching an earlier train if you choose to walk down the escalator instead
of standing still on it.

Input :

The first line of the input contains an integer Tc denoting the number of test cases.
Each test case contains the following 4 lines

Ve - velocity of escalator

Vy - your relative velocity with the escalator

L - length of escalator

T - Time Period of Trains

Output

For each test case, output a single line containing the expected probability having an
absolute or relative error less than 10^-6.

*/
#include <bits/stdc++.h>
using namespace std;
//@author Vidur Katyal
#define endl '\n'
#define pb push_back
#define mp make_pair
typedef long long LL;
typedef pair <int, int> pii;
typedef pair <int, pii> piii;
typedef vector <int> vi;
typedef vector < pii > vpii;
#define DEBUG(x) cerr<<#x<<": "<<x<<endl;
#define FAST1 ios_base::sync_with_stdio(0)
#define FAST2 cin.tie(0);cout.tie(0); cerr.tie(0)
const long double PI = acos(-1.0);
const long double EPS = 1e-9;
const LL MOD = 1000000007;
const LL MAXN = 100010;

int main()
{
	FAST1;
	FAST2;
	int T;
	cin>>T;
	cout<<fixed;
	while(T--)
	{
		double Ve, Vy, L, T;
		cin>>Ve>>Vy>>L>>T;
		double T1 = (double)L/Ve;
		double T2 = L/(Ve+Vy);
		double diff = T1 - T2;
		if(diff >= T)
			cout<<1.0<<endl;
		else
			cout<<diff/T<<endl;
	}
	return 0;
}
