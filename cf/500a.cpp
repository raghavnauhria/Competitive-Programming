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

int n, t;
cin >> n >> t;

int i, a[n-1];

for(i=0; i<n-1; i++)
	cin >> a[i];

for(i=1; i<=n; i+=a[i-1])
{
	if( i == t)
	{
		cout << "YES";
		return 0;
	}
}

cout << "NO";

return 0;
}
