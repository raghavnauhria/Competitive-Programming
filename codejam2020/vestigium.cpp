#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;

typedef pair<int, int> pii;
typedef pair<int, ll> pil;
typedef pair<int, ld> pid;
typedef pair<ll, int> pli;
typedef pair<ll, ll> pll;
typedef pair<ll, ld> pld;
typedef pair<ld, int> pdi;
typedef pair<ld, ll> pdl;
typedef pair<ld, ld> pdd;
typedef pair<string, int> psi;
typedef pair<string, ll> psl;
typedef pair<string, ld> psd;
typedef pair<pii, int> tri;
 
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ld> vd;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
typedef vector<pdd> vpd;
typedef vector<tri> viii;
 
typedef map<int,int> mii;
typedef map<char,int> mci;
typedef map<string, int> msi;
typedef map<string, vi> msv;
typedef unordered_map<int, int> umap;
typedef priority_queue<int> pq;

#define fi(i,a,b) for(auto i=a;i<b;i++)
#define fd(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define sz(a) a.size()
#define cini(a) int a; cin >> a;
#define cinii(a, b) int a, b; cin >> a >> b;
#define ciniii(a, b, c) int a, b, c; cin >> a >> b >> c;
#define cinl(a) ll a; cin >> a;
#define cinc(c) char c; cin >> c;
#define cins(s) string s; cin >> s;
#define cinss(s1, s2) string s1, s2; cin >> s1 >> s2;
#define cinvi(v, n) vi v(n, 0); fi(i, 0, n) cin >> v[i];
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define flush fflush(stdout)

#define print(v) for (auto it = v.begin(); it != v.end(); ++it) cout << *it << ' '; cout << endl;
#define printm(m) for (auto it = m.begin(); it != m.end(); ++it) cout << it->first<<' '<<it->second << endl; cout << endl;
#define disparr(arr,n) for(ll i=0;i<(n);i++)   cout<<arr[i]<<' ';  cout<<endl;
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
#define All(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

const int MOD = 1000000007;
const ll INF = 1e18;
const ld PI=3.141592653589793238462643383279502884197169399375105820974944;

int main()
{
	fastio; //Remove for interactive problems

	cini(t);
	fi(it, 0, t)
	{
		int k=0, r=0, c=0;
		cini(n);
		int a[n][n];
		fi(i, 0, n)
			fi(j, 0, n)
				cin >> a[i][j];

		fi(i, 0, n)
			k+= a[i][i];

		unordered_set<int> distinct;

		fi(i, 0, n)
		{
			// rows
			fi(j, 0, n)
			{
				distinct.insert(a[i][j]);
				if(distinct.size() < j+1)
					break;
			}
			if(distinct.size() < n)
				r++;
			distinct.clear();

			// cols
			fi(j, 0, n)
			{
				distinct.insert(a[j][i]);
				if(distinct.size() < j+1)
					break;
			}
			if(distinct.size() < n)
				c++;
			distinct.clear();
		} 

		cout << "Case #" << it+1 << ":" sp k sp r sp c << endl;
	}

	return 0;
}