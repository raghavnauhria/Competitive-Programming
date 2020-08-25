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

void printPath(vl &parent, ll j)
{
	if (parent[j] == -1)
	{
		cout << "1 ";
		return;
	}

	printPath(parent, parent[j]);

	cout << j+1 << " ";
}

void dijkstra(vpl adj[], vl &parent, vl &dist, ll n, ll root)
{
	set<ll> s;
	priority_queue<pll, vpl, greater<pll>> pq;
	pq.push(mp(0, 0)); // wt, index

	while (!pq.empty()) // or (s.size()<n) for connected graphs
	{
		int u = pq.top().second;
		pq.pop();

		if (u == n - 1)
			break;

		if (s.count(u) > 0)
			continue;
		s.insert(u);

		for (auto i : adj[u])
		{
			int v = i.first, w = i.second;

			if (dist[v] > dist[u] + w)
			{
				dist[v] = dist[u] + w;
				pq.push(mp(dist[v], v));
				parent[v] = u;
			}
		}
	}
}

int main()
{
	fastio; //Remove for interactive problems

	cinll(n, m);

	vpl adj[n];

	fi(i, 0, m)
	{
		cinlll(a, b, w);
		adj[a-1].pb(mp(b-1, w));
		adj[b-1].pb(mp(a-1, w));
	}

	vl dist(n, INF);
	vl parent(n, -1);
	dist[0] = 0;

	dijkstra(adj, parent, dist, n, 0);

	if(parent[n-1] == -1)
		cout << "-1" << endl;
	else
	{
		printPath(parent, n-1);
		cout << endl;
	}
	return 0;
}