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

	int n, m;
	cin >> n >> m;

	vector<ll> a(n, 0);
	vector<ll> c(m, 0);

	int i=0;
	while(i<n)
	{
		cin >> a[i];
		++c[a[i]%m];
		++i;
	}

	int x = n/m;

	ll ans = 0;

	// i=0;
	// while(i<2*m-1)
	// {
	// 	if(c[i%m] > x)
	// 	{
	// 		ans += (c[i%m] - x);
	// 		c[(i+1)%m] += (c[i%m] - x);

	// 		c[i%m] = x;
	// 	}
	// 	++i;
	// }

	i=0;
	int j;
	while(i<n)
	{
		if(c[a[i]%m] > x)
		{
			j = a[i]%m + 1;
			++ans;
			//++a[i];
			--c[a[i]%m];

			while(j<m && c[j] >= x)
			{
				++j;
				++ans;
				++a[i];
			}
			++c[j];
		}
		++i;
	}

	cout << ans << "\n";
	i=0;
	while(i<n)
	{
		cout << a[i] << " ";
		++i;
	}

	return 0;
}