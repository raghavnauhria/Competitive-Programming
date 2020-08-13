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
#define sc(x) scanf("%d", &x)
#define sc2(x, y) scanf("%d %d", &x, &y)
#define sc3(x) scanf("%s", x)
#define sc4(x) scanf("%lld", &x)
#define sc5(x, y) scanf("%lld %lld", &x, &y)
#define MOD 1000000007

int main()
{
ios::sync_with_stdio(false);

int t, n, x, swap, temp;
sc(t);

while(t--)
{
	sc(n);
	vi a;

	fi(i, 0, n)
	{
		sc(x);
		a.pb(x);
	}
	
	temp=n;

	fd(i, n-1, 0)
	{
		if( i>=1 && a[i] > a[i-1])
		{
			temp = i-1;
			break;
		}
	}

	if(temp == n)
	{
		printf("-1\n");
		break;
	}
	
	fd(i, n-1, temp)
		if(a[i] > a[temp])
		{
			swap = a[i];
			a[i] = a[temp];
			a[temp] = swap;
			break;
		}

	fi(i, temp+1, temp + 1+(n-1-temp)/2)
	{
		swap = a[i];
		a[i] = a[n-i+temp];
		a[n+temp-i] = swap;
	}

	fi(i, 0, n)
		printf("%d", a[i]);
	printf("\n");
}

return 0;
}
