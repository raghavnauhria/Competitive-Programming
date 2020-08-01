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


int main()
{
ios::sync_with_stdio(false);

int n;
sc(n);

int b[n], i, j=0;

rep(i,n)
	sc(b[i]);

int m;
sc(m);

int g[m];

rep(i,m)
	sc(g[i]);

sort(b,b+n);
sort(g,g+m);

int ans=0;

for(i=0; i<n; i++)
	for(; j<m; j++)
	{
		if( abs(b[i]-g[j]) <= 1)
		{
			ans++;
			g[j++] = -2;
			break;
		}
		if( g[j] > b[i])
			break;
	}
		
cout << ans;		

return 0;
}
