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

int t;
sc(t);

int n;

fi(i,0,t)
{
	sc(n);

	if( n%2 == 0)
	{
		fi(j,1,n/2)
		{
			printf("%d %d ", j*2, j*2-1);
		}

		printf("%d %d\n", n, n-1);
	}
	else
	{
		fi(j,1,(n-1)/2)
		{
			printf("%d %d ", j*2, j*2-1 );
		}

		printf("%d %d %d\n", n-1, n, n-2);
	}
}
return 0;
}
