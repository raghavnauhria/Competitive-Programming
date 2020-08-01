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

int n, m;
sc2(n, m);

char a[101];

int i, j;

for(i=0; i<n; i++)
{
	scanf("%s", a);
	
	for(j=0; j<m; j++)
	{
		if(a[j] == '.')
		{
			if( (i+j)%2 )	a[j] = 'W';
			else			a[j] = 'B';
		}
	}
	printf("%s\n", a);
}
	
return 0;
}
