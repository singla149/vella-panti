/*
Amr bought a new video game "Guess Your Way Out!".
The goal of the game is to find an exit from the maze that looks like a perfect
binary tree of height h. The player is initially standing at the root of the tree
and the exit from the tree is located at some leaf node.
Let's index all the leaf nodes from the left to the right from 1 to 2^h.
The exit is located at some node n where 1 ≤ n ≤ 2^h, the player doesn't know where
the exit is so he has to guess his way out!
Amr follows simple algorithm to choose the path. Let's consider infinite command string
"LRLRLRLRL..." (consisting of alternating characters 'L' and 'R'). Amr sequentially
executes the characters of the string using following rules:
Character 'L' means "go to the left child of the current node";
Character 'R' means "go to the right child of the current node";
If the destination node is already visited, Amr skips current command, otherwise
he moves to the destination node;
If Amr skipped two consecutive commands, he goes back to the parent of the current node
before executing next command;
If he reached a leaf node that is not the exit, he returns to the parent of the current
node;
If he reaches an exit, the game is finished.
Now Amr wonders, if he follows this algorithm, how many nodes he is going to visit
before reaching the exit?

Input

First Line contains T the number of test cases
The next T lines contains 2 integers h, n
 
Output

Output T lines each containing an integer representing the number of nodes
(excluding the exit node) Amr is going to visit before reaching the exit by following
this algorithm.

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
	while(T--)
	{
		LL h, n;
		cin>>h>>n;
		LL res = 0, total = (1LL << h);
		total /= 2;
		while(total)
		{
			if(n > total)
			{
				n -= total;
				res += 2*total - 1;
			}
			else
				n = total - n + 1;
			total /= 2;
			++res;
			/*DEBUG(res);
			DEBUG(total);*/
		}
		cout<<res<<endl;
	}
	return 0;
}