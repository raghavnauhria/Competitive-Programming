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
#define MAX 100001

int n, m, cat[MAX], ans=0;
vector< vector<int> > tree(MAX);
bool visited[MAX];

void dfs(int u, int sum)
{
	visited[u] = true;
	
	if(sum > m)
		return;
	
	bool leaf = true;
	
	int i;
	for(i=0; i<tree[u].size(); i++)
	{
		if(!visited[tree[u][i]])
		{
			leaf = false;
			
			if(cat[ tree[u][i]-1 ])
				dfs(tree[u][i], sum+1);
			else
				dfs(tree[u][i], 0);
		}
	}
	
	if(leaf)
		ans++;
}

int main()
{
ios::sync_with_stdio(false);

scanf("%d %d", &n, &m);

int i, u, v;

for(i=0; i<n; i++)
	scanf("%d", &cat[i]);

for(i=0; i<n-1; i++)
{
	scanf("%d %d", &u, &v);
	
	tree[u].push_back(v);
	tree[v].push_back(u);
}

dfs(1, cat[0]);

printf("%d\n", ans);

return 0;
}
