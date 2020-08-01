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
	cin.tie(NULL);

	int t, n, count;
	cin >> t;

	while(t--)
	{
		cin >> n;
		vl a(n, 0);
		count = 0;

		rep(i, n)
			cin >> a[i];

		rep(i, n-1)
		{
			if(a[i] > a[i+1])
				count++;
			if(count > 1)
				break;
		}
		if(a[n-1] > a[0])
			count++;

		if(count > 1)
			cout << "NO\n";
		else
			cout << "YES\n";
	}

	return 0;
}