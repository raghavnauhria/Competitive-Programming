#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, int> psi;
typedef pair<string, ll> psl;
typedef pair<pii, int> tri;
 
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ld> vd;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
typedef vector<tri> viii;
 
typedef map<int,int> mii;
typedef map<char,int> mci;
typedef map<string, int> msi;
typedef map<string, vi> msv;
typedef unordered_map<int, int> umap;
typedef unordered_map<ll, ll> umapl;
typedef priority_queue<int> pq;

#define fi(i,a,b) for(auto i=a;i<b;i++)
#define fd(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define ss second
#define ff first
#define sz(a) a.size()
#define cini(a) int a; cin >> a;
#define cinii(a, b) int a, b; cin >> a >> b;
#define ciniii(a, b, c) int a, b, c; cin >> a >> b >> c;
#define cinl(a) ll a; cin >> a;
#define cinll(a, b) ll a, b; cin >> a >> b;
#define cinlll(a, b, c) ll a, b, c; cin >> a >> b >> c;
#define cinc(c) char c; cin >> c;
#define cins(s) string s; cin >> s;
#define cinss(s1, s2) string s1, s2; cin >> s1 >> s2;
#define cinvi(v, n) vi v(n, 0); fi(i, 0, n) cin >> v[i];
#define cinvl(v, n) vl v(n, 0); fi(i, 0, n) cin >> v[i];
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define flush fflush(stdout)

#define print(v) for (auto it = v.begin(); it != v.end(); ++it) cout << *it << ' '; cout << endl;
#define print2(v) for (auto it = v.begin(); it != v.end(); ++it) cout << *it << endl;
#define printmap(m) for (auto it = m.begin(); it != m.end(); ++it) cout << it->first<<' '<<it->second << endl; cout << endl;
#define disparr(arr,n) for(ll i=0;i<(n);++i)   cout<<arr[i]<<' ';  cout<<endl;
#define debug(x) cout << x << endl;
#define debug2(x,y) cout << x << " " << y << endl;
#define debug3(x,y,z) cout << x << " " << y << " " << z << endl;

#define LC(i) 2*(i)+1
#define RC(i) 2*(i)+2
#define MID(i,j) ((i)+(j))/2
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))

#define nn "\n"
#define sp << " " <<
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

const int MOD = 1000000007;
const ll INF = 1e18;
const ld PI=3.141592653589793238462643383279502884197169399375105820974944;

class solve
{
	public:
	int n;
	ll m;
	vl population;
	vl happiness;
	vl maxPop;
	vi *adj;
	vi parent;

	solve()
	{
		cini(n);
		cinl(m);
		vl population(n + 1, 0);
		vl happiness(n + 1, 0);

		fi(i, 1, n + 1)
			cin >> population[i];
		fi(i, 1, n + 1)
			cin >> happiness[i];

		vl maxPop(n + 1, 0);
		vi parent(n + 1, 0);
		vi adj[n + 1];
		fi(i, 0, n - 1)
		{
			cinii(x, y);
			adj[x].pb(y);
			adj[y].pb(x);
			// parent
		}

		this->n = n;
		this->m = m;
		this->population = population;
		this->happiness = happiness;
		this->maxPop = maxPop;
		this->adj = adj;

		numberOfNodes(1, 0);

		// print(this->maxPop);

		vector<bool> visited(n+1, false);
		bool res = check(1, visited);
		if (res)
		{
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;
	}

	ll sad(int node)
	{
		return maxPop[node] - happiness[node];
	}
	
	bool check(int root, vector<bool> visited)
	{
		visited[root] = true;
		if(abs(happiness[root]) > maxPop[root] || sad(root)%2 == 1)
			return false;

		bool res = true;

		vector<int>::iterator u;
		for (u = adj[root].begin(); u != adj[root].end() && res; u++)
		{
			if(!visited[*u])
			{
				if(sad(*u) > sad(root))
				{
					res = false;
					break;
				}
				res = res & check(*u, visited);
			}
		}

		return res;
	}

	void numberOfNodes(int s, int e)
	{
		vector<int>::iterator u;
		maxPop[s] = population[s];

		for (u = adj[s].begin(); u != adj[s].end(); u++)
		{

			// condition to omit reverse path
			// path from children to parent
			if (*u == e)
				continue;

			// recursive call for DFS
			numberOfNodes(*u, s);

			// update count[] value of parent using
			// its children
			maxPop[s] += maxPop[*u];
		}
	}
};


int main()
{
	fastio; //Remove for interactive problems

	cini(t);
	while(t--)
	{
		solve Ans;
	}

	return 0;
}