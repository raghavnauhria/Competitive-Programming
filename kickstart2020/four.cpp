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
	fi(tt, 0, t)
	{
		cinii(n, q);
		cinvi(doors, n-1);
		doors.pb(100001);
		doors.insert(doors.begin(), 100001);

		vi left(n+1, 0);
		vi right(n+1, 0);
		fi(i, 1, n+1)
		{
			if(doors[i] > doors[i-1])
				left[i] = left[i-1]+1;
		}
		fd(i, n-1, 0)
		{
			if(doors[i] > doors[i+1])
				right[i] = right[i+1]+1;
		}
		print(left);
		print(right);

		vi ans;

		fi(qq, 0, q)
		{
			cinii(s, k);
			if(s == 1)
			{
				ans.pb(k);
			}
			else if(s == n)
			{
				ans.pb(n-k+1);
			}
			else
			{
				int l = s - 1, r = s, current = s;
				fi(kk, 1, k)
				{
					cout << "kk: " << kk << endl;
					if (doors[l] < doors[r])
					{
						if(left[r] >= k-kk)
						{
							// ans.pb(s-(k-kk));
							current = s - (k-kk);
							break;
						}
						else
						{
							cout << "Here " << k << " " << l << " " << r << endl; 
							current = current - left[r];
							kk += left[r];
							l = r - (left[r]+1);
						}
					}
					else
					{
						if (right[l] >= k - kk)
						{
							// ans.pb(s + (k-kk));
							current = s + (k-kk);
							break;
						}
						else
						{
							current = current + right[l];
							kk += right[l];
							r = l + right[l] + 1;
						}
					}
				}
				ans.pb(current);
			}
		}

		cout << "Case #" << tt + 1 << ": ";
		print(ans);
	}

	return 0;
}