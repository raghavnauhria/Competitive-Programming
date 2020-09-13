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

void constructSegTreeUtil(vi & tree, vi & seq, int sl, int sr, int si, int op)
{
	if(sl == sr)
	{
		tree[si] = seq[sl];
		return;
	}

	int mid = sl + (sr - sl) / 2;
	constructSegTreeUtil(tree, seq, sl, mid, si * 2 + 1, !op);
	constructSegTreeUtil(tree, seq, mid+1, sr, si*2 + 2, !op);

	if(op == 1)
	{
		tree[si] = (tree[si * 2 + 1] | tree[si * 2 + 2]);
	}
	else
	{
		tree[si] = (tree[si * 2 + 1] ^ tree[si * 2 + 2]);
	}	
}

void constructSegTree(vi & tree, vi & seq, int n, int height)
{
	int op = (height&1)? 1 : 0; // 1 => XOR, 0 => OR

	constructSegTreeUtil(tree, seq, 0, n-1, 0, op);
}

void updateValueUtil(vi & tree, vi & seq, int sl, int sr, int si, int p, int b, int op)
{
	if(p < sl || p > sr)
		return;

	if(sl == sr)
	{
		tree[si] = seq[sl];
		return;
	}

	int mid = sl + (sr - sl) / 2;
	updateValueUtil(tree, seq, sl, mid, si * 2 + 1, p, b, !op);
	updateValueUtil(tree, seq, mid+1, sr, si*2 + 2, p, b, !op);

	if(op == 1)
	{
		tree[si] = (tree[si * 2 + 1] | tree[si * 2 + 2]);
	}
	else
	{
		tree[si] = (tree[si * 2 + 1] ^ tree[si * 2 + 2]);
	}
}

void updateValue(vi & tree, vi & seq, int n, int height, int p, int b)
{
	int op = (height & 1) ? 1 : 0; // 1 => XOR, 0 => OR

	seq[p] = b;

	updateValueUtil(tree, seq, 0, n-1, 0, p, b, op);
}

int main()
{
	fastio; //Remove for interactive problems

	cinii(n, m);
	int height = n;
	n = (1<<n);

	cinvi(seq, n);

	vi tree(2*n-1);

	constructSegTree(tree, seq, n, height);

	// print(tree);

	while(m--)
	{
		cinii(p, b);

		updateValue(tree, seq, n, height, p-1, b);

		// print(tree);

		cout << tree[0] << endl;
	}

	return 0;
}