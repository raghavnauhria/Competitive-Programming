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


vi adjlist[100001];
int color[100001];
vi part[2];

bool dfs(int v, int flag = 2)
{

	color[v] = flag;
	part[flag - 1].push_back(v);
	for(int u : adjlist[v])
	{
		if(!color[u] && dfs(u, 3-flag))
				return 1;
		if(color[u] != 3-flag)
			return 1;
	}
	return 0;
}

int main()
{
ios::sync_with_stdio(false);

int n, m;
sc2(n, m);

int a, b;

fi(i, 0, m)
{
	sc2(a, b);
	adjlist[a-1].push_back(b-1);
	adjlist[b-1].push_back(a-1);
}

fi(i, 0, n)
{
	if(!color[i])
	{
		if(adjlist[i].empty())
			continue;

		if(dfs(i))
			{
				cout << -1 << endl;
				return 0;
			}
	}
}

for (int i = 0; i < 2; ++i)
{
	cout << part[i].size() << endl;

	for(int j= 0; j < part[i].size(); j++)
		cout << part[i][j] + 1 << " ";

		cout << endl;
}

return 0;
}
