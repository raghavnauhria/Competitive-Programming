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

int lim=100000;

ll x, b[lim+1], dp[lim+1];

fi(i,0,lim+1)
	b[i] = 0;

fi(i,0,n)
{
	sc4(x);
	b[x]++;
}

dp[0]=0;
dp[1]=b[1];

fi(i, 2, lim+1)
	dp[i] = max( dp[i-1], (dp[i-2] + (b[i]*i) ) );
	
cout << dp[lim];

return 0;
}