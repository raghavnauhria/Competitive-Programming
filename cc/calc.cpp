/*	
 *	Codechef
 *	attempted by Raghav Nauhria
 *
 *	Problem Name: Calculator
 *	Problem Code: CALC
 */
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef pair<ll, ll> pll;
typedef vector<pll, pll> vll;
typedef pair<int, ii> tri;
typedef vector<tri> viii;

#define fi(i,a,b) for(auto i=a;i<b;i++)
#define rep(i,n) fi(i,0,n)
#define fd(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define sz(a) a.size()

int main()
{
ios::sync_with_stdio(false);

int t;
cin >> t;

ll n, b, x, temp;

// let x units of energy be consumed by 1st screen
// we have to maximise (N-x)*x/B
// max will either at or around N/2*B
while(t--)
{
	cin >> n >> b;
	x=0;	
	temp = n/(2*b);
	if( n/b == 1)
		cout << n-b << "\n";
	else
	{
		x = max(x,temp*(n-temp*b));
		x = max(x,(temp+1)*(n-temp*b-b));
		x = max(x,(temp-1)*(n-temp*b+b));
		
		cout << x << "\n";
	}
	
}

return 0;
}
