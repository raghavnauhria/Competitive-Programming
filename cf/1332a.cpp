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

	while(t--)
	{
		ll a, b, c, d, x, y, x1, y1, x2, y2;
		cin >> a >> b >> c >> d >> x >> y >> x1 >> y1 >> x2 >> y2;

		ll hor = b-a;
		ll vert = d-c;
		bool flag = false;

		if((x+hor >= x1 && x+hor <= x2) && (y+vert >= y1 && y+vert <= y2))
		{
			if( (x1 == x2 && (a!=0 || b!=0)) || (y1 == y2 && (c!=0 || d!=0)))
				flag = false;
			else
				flag = true;
		}
		else
			flag = false;

		if(flag)
			cout << "Yes\n";
		else
			cout << "No\n";
	}

	return 0;
}