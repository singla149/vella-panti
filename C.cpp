/*
You have N toffee packets, each containing different number of toffees. The number of
toffees contained in the ith packet is denoted by ci. You need to put these toffee
packets in M boxes such that each box contains at least one toffee packet, and the
maximum number of toffees in a box is minimum.
You can only choose consecutive toffee packets to put in a box.
 
Input

The first line of the input contains an integer T denoting the number of test cases.
The first line of each test case contains two space separated integers N, M denoting
the number of toffee packets and the number of boxes respectively. The second line of
each test case contains N space separated integers c1, c2, ..., cN where ci denotes the
number of the toffees in the ith toffee packet.
 
Output

For each test case, output a single line containing the maximum number of toffees in a
box. Also, output -1 if such an assignment of toffee packets to boxes is not possible.
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

int partition(int *A, int n, int mxtoffee)
{
	int sum = 0, num = 1;
	for (int i = 0; i < n; ++i)
	{
		sum += A[i];
		if(sum > mxtoffee)
		{
			sum = A[i];
			++num;
		}
	}
	return num;
}

int main()
{
	FAST1;
	FAST2;
	int T;
	cin>>T;
	while(T--)
	{
		int n, m;
		cin>>n>>m;
		int c[n];
		int sum = 0;
		int low = 0;
		for (int i = 0; i < n; ++i)
		{
			cin>>c[i];
			sum += c[i];
			low = max(c[i], low);
		}
		if(n < m)
		{
			cout<<-1<<endl;
			continue;
		}
		int high = sum;
		while(low < high)
		{
			int mid = low + (high-low)/2;
			int val = partition(c, n, mid);
			if(val <= m)
				high = mid;
			else
				low = mid+1;
		}
		cout<<low<<endl;
	}
	return 0;
}