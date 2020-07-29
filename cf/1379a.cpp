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

int numQuestion(string s, int i, int len)
{
	int ans = 0;
	fi(x, i, i+len)
	{
		if(s[x] == '?')
			ans++;
	}

	return ans;
}

bool hasSubstring(string s, int i, string substring)
{
	fi(x, i, i+7)
	{
		if(s[x] != '?' && s[x] != substring[x-i])
			return false;
	}
	return true;
}

int main()
{
	fastio; //Remove for interactive problems

	string substring = "abacaba";

	cini(t);
	while(t--)
	{
		cini(n);
		cins(s);

		int b = 0;
		vi start;

		fi(i, 0, s.size()-6)
		{
			if(hasSubstring(s, i, substring))
			{
				if(numQuestion(s, i, 7) > 0)
				{
					start.pb(i);
				}
				else
					b++;
			}

			if(b > 1)
				break;
		}

		if(b > 1)
		{
			cout << "NO" << endl;
			continue;
		}
		else if(b == 1)
		{
			cout << "YES\n";
			fi(i, 0, s.size())
				if(s[i] == '?')
					s[i] = 'z';
			
			cout << s << endl;
			continue;
		}
		
		int ansFound = -1;
		fi(i, 0, start.size())
		{
			if( ((i+1<start.size() && start[i+1] > start[i]+6) || i+1>= start.size()) && 
				((i-1>=0 && start[i] > start[i-1]+6) || i-1<0)
				)
			{
				ansFound = start[i];
			}
		}
		if(ansFound >= 0)
		{
			fi(i, ansFound, ansFound+7)
				s[i] = substring[i-ansFound];

			cout << "YES\n" << s << endl;
			continue;
		}

		fi(i, 0, start.size())
		{
			if(ansFound >= 0)
				break;

			if(i+1 < start.size() && start[i+1] - start[i] == 4)
			{
				if(numQuestion(s, start[i+1], 3) > 0)
				{
					if(numQuestion(s, start[i+1]+3, 4) > 0)
					{
						ansFound = true;
						fi(j, 0, 4)
							s[start[i]+j] = substring[j];
					}
					else if(numQuestion(s, ))
				}
			}
		}
	}

	return 0;
}