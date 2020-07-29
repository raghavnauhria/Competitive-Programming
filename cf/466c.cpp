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

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vi a(n, 0);
	vl prefix_sum(n, 0);
	for(int i=0; i<n; ++i)
	{
		cin >> a[i];
		prefix_sum[i] = a[i];
	}
	for(int i=1; i<n; ++i)
		prefix_sum[i] += prefix_sum[i-1];

	if(prefix_sum[n-1] % 3 != 0)
		cout << 0 << endl;
	else
	{
		vi one, two;
		ll ans = 0;
		for(int i=0; i<n-1; ++i)
		{
			if(prefix_sum[i] == prefix_sum[n-1]/3)
				one.push_back(i);
			if(prefix_sum[i] == 2*prefix_sum[n-1]/3)
				two.push_back(i);
		}

		int len1=one.size(), len2=two.size();
		for(int i=0; i<len1; ++i)
		{
			int index = upper_bound(two.begin(), two.end(), one[i])-two.begin();
			ans += (len2 - index);
		}

		cout << ans << endl;
	}

	return 0;
}