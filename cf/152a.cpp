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

	int n, m;
	cin >> n >> m;

	vector<string> a;
	for(int i=0; i<n; ++i)
	{
		string s;
		cin >> s;
		a.pb(s);
	}

	vector<bool> isSuccessfull(n, false);

	for(int i=0; i<m; ++i)
	{
		char comp = a[0][i];
		int index = 0;
		for(int j=1; j<n; ++j)
		{
			if(a[j][i] > comp)
			{
				comp = a[j][i];
				index = j;
			}
		}
		for(int j=0; j<n; ++j)
			if(a[j][i] == comp)
				isSuccessfull[j] = true;
	}

	int ans = 0;
	for(int i=0; i<n; ++i)
		if(isSuccessfull[i])
			++ans;

	cout << ans << endl;

	return 0;
}