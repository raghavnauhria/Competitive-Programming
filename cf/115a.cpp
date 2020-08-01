#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef pair<ll, ll> pll;
typedef vector<pll, pll> vll;
typedef pair<ii, int> tri;
typedef vector<tri> viii;

#define fi(i,a,b) for(auto i=a;i<b;i++)
#define rep(i,n) fi(i,0,n)
#define fd(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define sz(a) a.size()
#define sc(x) scanf("%d", &x)
#define sc2(x, y) scanf("%d %d", &x, &y)
#define sc3(x) scanf("%s", x)
#define sc4(x) scanf("%lld", &x)
#define sc5(x, y) scanf("%lld %lld", &x, &y)
#define MOD 1000000007

int main()
{
ios::sync_with_stdio(false);

int n;
scanf("%d", &n);

int o[n], i, j, dmax=0, d=0;

for(i=0; i<n; i++)
	scanf("%d", &o[i]);

for(i=0; i<n; i++)
{
	d=1;
	
	for(j = o[i]; j != -1; j = o[j-1])
		d++;
		
	dmax = max(d,dmax);
}

printf("%d\n", dmax);
return 0;
}
