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
	cin.tie(NULL);

	int n;
	cin >> n;

	vi a(n, 0);

	int sum = 0;
	for(int i=0; i<n; ++i)
	{
		cin >> a[i];
		sum += a[i];
	}

	if(n>=3)
	{
		if(sum -a[n-1] != a[n-1])
		{
			cout << n-1 << endl;
			for(int i=1; i<= n-1; ++i)
				cout << i << " ";
		}
		else
		{
			cout << n-2 << endl;
			for(int i=1; i<= n-2; ++i)
				cout << i << " ";
		}
	}
	else
	{
		if(n == 1)
		{
			cout << -1;
		}
		else
		{
			if( a[0] == a[1])
				cout << -1;
			else
				cout <<"1\n1";
		}
	}

	return 0;
}
