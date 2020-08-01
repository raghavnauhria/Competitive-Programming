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

	vl a(n);
	for(int i=0; i<n; ++i)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end(), greater<>());

	vi count;
	count.pb(1);

	int c = 1;
	for(int i=1; i<n; ++i)
	{
		if(a[i] == a[i-1])
			count[c-1]++;
		else
		{
			count.pb(1);
			c++;
		}
	}
	vi s(c, 0);
	for(int i=c-2; i>=0; --i)
	{
		s[i] = s[i+1] + count[i+1];
	}

	ll ans = 0;

	int i=0;
	while(i<c && s[i] >= count[i])
	{
		s[i] -= count[i];
		ans += count[i];
		s[i+1] = min(s[i+1], s[i]);
		++i;
	}

	if(i<c)
		ans += s[i];

	cout << ans;

	return 0;
}