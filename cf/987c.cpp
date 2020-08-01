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
	cin >> n;

	int a[2][n];

	for(int i=0; i<2; ++i)
		for(int j=0; j<n; ++j)
			cin >> a[i][j];

	int cheapest =INT_MAX;
	int csl[n], clr[n];
	bool flag = false;

	for(int i=0; i<n; ++i)
	{
		cheapest = INT_MAX;
		flag = false;
		for(int j=0; j<i; ++j)
		{
			if(a[0][j] < a[0][i] && a[1][j] < cheapest)
				cheapest = a[1][j], flag = true;
		}
		if(flag)
			csl[i] = cheapest;
		else
			csl[i] = -1;

		cheapest = INT_MAX;
		flag = false;
		for(int j=n-1; j>i; --j)
		{
			if(a[0][j] > a[0][i] && a[1][j] < cheapest)
				cheapest = a[1][j], flag = true;
		}

		if(flag)
			clr[i] = cheapest;
		else
			clr[i] = -1;
	}

	cheapest = INT_MAX;
	flag = false;
	for(int i=0; i<n; ++i)
	{
		if(csl[i] != -1 && clr[i] != -1 && csl[i]+clr[i]+a[1][i] < cheapest)
			cheapest = csl[i]+clr[i]+a[1][i], flag = true;
	}

	if(flag)
		cout << cheapest << endl;
	else
		cout << "-1\n";

return 0;
}