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

	int q;
	cin >> q;

	while(q--)
	{
		string s;
		cin >> s;

		int l=0, r=0, u=0, d=0, n = s.length();
		for(int i=0; i<n; ++i)
		{
			if(s[i] == 'L')
				++l;
			else if(s[i] == 'R')
				++r;
			else if(s[i] == 'U')
				++u;
			else
				++d;
		}
		l = min(l, r);
		r = l;
		u = min(u, d);
		d = u;
		if(u == 0)
		{
			if(l == 0)
			{
				cout << "0\n\n";
			}
			else
			{
				cout << "2\nLR\n";
			}
		}
		else if(l == 0)
		{
			cout << "2\nUD\n";
		}
		else
		{
			cout << l+r+u+d << endl;
			string ans = "";
			for(int i=0; i<l; ++i)
				ans += 'L';
			for(int i=0; i<u; ++i)
				ans += 'U';
			for(int i=0; i<l; ++i)
				ans += 'R';
			for(int i=0; i<u; ++i)
				ans += 'D';
			cout << ans << endl;
		}
	}

	return 0;
}