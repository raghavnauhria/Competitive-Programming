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

umap counters[6];

void recv(int x)
{
	bool there = false;
	fi(c, 0, 5)
	{
		if (counters[c].find(x) != counters[c].end())
		{
			there = true;
			// cout << "shifted " << x << " from " << c << " to " << c+1 << endl;
			counters[c].erase(x);
			counters[c + 1][x] = c + 2;

			break;
		}
	}
	if (counters[5].find(x) != counters[5].end() && !there)
	{
		there = true;
		counters[5][x]++;
	}

	if(!there)
	{
		counters[0][x] = 1;
		// cout << "added " << x << endl;
	}
}

void remv(int x)
{
	bool removed = false;
	if(counters[5].find(x) != counters[5].end())
	{
		counters[5][x]--;
		removed = true;
		if(counters[5][x] < 6)
		{
			counters[5].erase(x);
			counters[4][x] = 5;
			// cout << "shifted " << x << " from " << 5 << " to " << 4 << endl;
		}
	}
	else
	{
		fd(c, 4, 1)
		{
			if (counters[c].find(x) != counters[c].end())
			{
				counters[c].erase(x);
				counters[c-1][x] = c;
				removed = true;
				// cout << "shifted " << x << " from " << c << " to " << c - 1 << endl;
				break;
			}
		}
		if (!removed && counters[0].find(x) != counters[0].end())
		{
			counters[0].erase(x);
			removed = true;
			// cout << "removed " << x << endl;
		}
	}
}

int main()
{
	fastio; //Remove for interactive problems

	cini(n);
	cinvi(a, n);
	cini(q);
	
	fi(i, 0, n)
	{
		recv(a[i]);
	}
	
	fi(i, 0, q)
	{
		cinc(c);
		cini(x);
		if (c == '-')
			remv(x);
		else
			recv(x);

		string ans = "NO";

		int temp = counters[3].size() + counters[4].size() + counters[5].size();
		int temp2 = counters[1].size() + counters[2].size();

		if(temp >= 2)
			ans = "YES";
		else if(temp == 1)
		{
			if(temp2 >= 2)
			{
				ans = "YES";
			}
			else if(temp2 == 1)
			{
				if(counters[5].size() == 1)
				{
					ans = "YES";
				}
			}
			else if(counters[5].size() == 1)
			{
				auto it = counters[5].begin();
				if(it->second >= 8)
				{
					ans = "YES";
				}
			}
		}

		cout << ans << endl;
	}

	return 0;
}