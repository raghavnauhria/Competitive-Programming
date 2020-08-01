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
#define cinvl(v, n) vl v(n, 0); fi(i, 0, n) cin >> v[i];
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

ld binomialCoeff(int n, int k, int div)  
{  
    ld res = 1.0;

    if(n < k || n < 1 || k < 0)
    	return 0.0;
  
    // Since C(n, k) = C(n, n-k)  
    if ( k > n - k )  
        k = n - k;  
  
    // Calculate value of  
    // [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]  
    for (ll i = 0; i < k; ++i)  
    {  
        res *= (n - i);  
        res /= (i + 1);
        if(div>0)
        {
        	res /= 2;
        	div--;
        }
    }  
  
    return res;  
}

int main()
{
	fastio; //Remove for interactive problems

	cini(t)

	fi(i, 0, t)
	{
		ciniii(w, h, l);
		ciniii(u, r, d);

		ld lans=0.0, rans=0.0;

		if(r >= 1 && w > r)
		{
			fi(ii, 0, u-1)
				lans += binomialCoeff(r-1+ii, r-1, ii);
			fi(ii, 0, r)
				lans /= 2.0;
		}

		// debug(lans);

		if(l > 1 && h > d)
		{
			fi(ii, 0, l-1)
				rans += binomialCoeff(d-1+ii, d-1, ii);
			fi(ii, 0, d)
				rans /= 2.0;
		}

		// debug(rans);

		cout << "Case #" << i+1 << ": " << lans+rans << "\n";
	}

	return 0;
}