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

	vector<int> a(n, 0);
	for(int i=0; i<n; ++i)
	{
		cin >> a[i];
	}
	vector< pair<int, int> > jump;

	for(int i=0; i<n; ++i)
	{
		int l, r;
		if(i-a[i] < 0)
			l = -1;
		else
			l = i-a[i];

		if(i+a[i] > n-1)
			r = -1;
		else
			r = i+a[i];

		jump.pb(mp(l, r));
	}
	vector<int> same(n, -1);
	vector<int> opp(n, -1);
	for(int i=0; i<n; ++i)
	{
		if(jump[i].first != -1)
		{
			if((a[i] + a[jump[i].first])%2==1)
				opp[i] = 1;
			else
				same[i] = 1;
		}
		if(jump[i].second != -1)
		{
			if((a[i] + a[jump[i].second])%2==1)
				opp[i] = 1;
			else
				same[i] = 1;
		}
	}

	for(int i=0; i<n; ++i)
	{
		int ans=0;
		while(ans < n)
		{

		}
	}

	return 0;
}