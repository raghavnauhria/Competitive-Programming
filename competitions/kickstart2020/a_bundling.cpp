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

	int t;
	cin >> t;

	for(int i=0; i<t; ++i)
	{
		int n, k;
		cin >> n >> k;
		vector<string> pip;
		for(int ii=0; ii<n; ++ii)
		{
			string s;
			cin >> s;
			pip.push_back(s);
		}
		unordered_map<string, vector<string> > groups;
		int sub_len = 1;
		while(groups.size() < n/k)
		{
			for(int ii=0; ii<n; ++ii)
			{
				groups[pip[ii].substr(0,sub_len)].push_back(pip[ii]);
			}

			sub_len++;
		}
		cout << "Case #" << i+1 << ": " << ans << "\n";
	}

	return 0;
}