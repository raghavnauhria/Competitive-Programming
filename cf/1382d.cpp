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

int main()
{
	fastio; //Remove for interactive problems

	cini(t);
	while(t--)
	{
		cini(n);
		cinvi(p, (2*n));

		vi units;
		units.pb(1);
		int curr_max = p[0], index = 0;

		fi(i, 1, (2*n))
		{
			if(p[i] > curr_max)
			{
				curr_max = p[i];
				index++;
				units.pb(1);
			}
			else
			{
				units[index]++;
			}	
		}

		bool subset[units.size() + 1][n + 1];

		// If sum is 0, then answer is true
		for (int i = 0; i <= units.size(); i++)
			subset[i][0] = true;

		// If sum is not 0 and set is empty,
		// then answer is false
		for (int i = 1; i <= n; i++)
			subset[0][i] = false;

		// Fill the subset table in botton up manner
		for (int i = 1; i <= units.size(); i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (j < units[i - 1])
					subset[i][j] = subset[i - 1][j];
				if (j >= units[i - 1])
					subset[i][j] = subset[i - 1][j] || subset[i - 1][j - units[i - 1]];
			}
		}

		if(subset[units.size()][n])
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}