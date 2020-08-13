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

	string s;
	cin >> s;
	 
	int len = s.size();
	vector<int> a(len, 0);

	for (int i = 0; i < len-1; ++i)
	{
		if(s[i] == s[i+1])
			a[i] = 1;
	}
	for (int i = 1; i < len; ++i)
	{
		a[i] += a[i-1];
	}
	 
	int n, x, y;
	cin >> n;

	while(n--)
	{
		cin >> x >> y;
		x--;y--;
		y--;
		if(x == 0)
			cout << a[y];
		else
			cout << a[y] - a[x-1];
		cout << endl;
	}
	
	return 0;
}