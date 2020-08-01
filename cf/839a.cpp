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

int Min(int a, int b)
{
	if(a<b)
		return a;
	else
		return b;
}

int main()
{
ios::sync_with_stdio(false);

int i, n, k;

sc2(n, k);

int a[n], c=0;

fi(i,0,n)
	sc(a[i]);

for(i=0; i<n; i++)
{
	c += a[i];
	
	k -= Min(8,c);
	c -= Min(8,c);
	
	if(k<=0)
		break;
}

if(k<=0)
	printf("%d", i+1);
else
	printf("-1");
	
return 0;
}
