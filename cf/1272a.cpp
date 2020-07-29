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
typedef unordered_map<int, int> umap;
typedef priority_queue<int> pq;

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

ll distance(ll a, ll b, ll c)
{
	ll ans = abs(a-b) + abs(b-c) + abs(a-c);
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int q;
	cin >> q;

	while(q--)
	{
		ll a, b, c;
		cin >> a >> b >> c;

		ll ans = distance(a, b, c);

		ans = min(ans, distance(a+1, b, c));
		ans = min(ans, distance(a-1, b, c));
		ans = min(ans, distance(a, b+1, c));
		ans = min(ans, distance(a, b-1, c));
		ans = min(ans, distance(a, b, c+1));
		ans = min(ans, distance(a, b, c-1));

		ans = min(ans, distance(a+1, b+1, c));
		ans = min(ans, distance(a+1, b-1, c));
		ans = min(ans, distance(a+1, b, c+1));
		ans = min(ans, distance(a+1, b, c-1));
		ans = min(ans, distance(a-1, b+1, c));
		ans = min(ans, distance(a-1, b-1, c));
		ans = min(ans, distance(a-1, b, c+1));
		ans = min(ans, distance(a-1, b, c-1));

		ans = min(ans, distance(b+1, a+1, c));
		ans = min(ans, distance(b+1, a-1, c));
		ans = min(ans, distance(b+1, a, c+1));
		ans = min(ans, distance(b+1, a, c-1));
		ans = min(ans, distance(b-1, a+1, c));
		ans = min(ans, distance(b-1, a-1, c));
		ans = min(ans, distance(b-1, a, c+1));
		ans = min(ans, distance(b-1, a, c-1));

		ans = min(ans, distance(c+1, b+1, a));
		ans = min(ans, distance(c+1, b-1, a));
		ans = min(ans, distance(c+1, b, a+1));
		ans = min(ans, distance(c+1, b, a-1));
		ans = min(ans, distance(c-1, b+1, a));
		ans = min(ans, distance(c-1, b-1, a));
		ans = min(ans, distance(c-1, b, a+1));
		ans = min(ans, distance(c-1, b, a-1));

		ans = min(ans, distance(a+1, b+1, c+1));
		ans = min(ans, distance(a+1, b+1, c-1));
		ans = min(ans, distance(a+1, b-1, c+1));
		ans = min(ans, distance(a+1, b-1, c-1));
		ans = min(ans, distance(a-1, b+1, c+1));
		ans = min(ans, distance(a-1, b+1, c-1));
		ans = min(ans, distance(a-1, b-1, c+1));
		ans = min(ans, distance(a-1, b-1, c-1));

		cout << ans << endl;
	}

	return 0;
}