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

bool intersect(const std::string& pattern1, const std::string& pattern2) {
    if(pattern1.empty() && pattern2.empty()) return true;
    if("*" == pattern1 || "*" == pattern2) return true;

    if(pattern2.empty() && '*' == pattern1[0]) return true;
    if(pattern1.empty() && '*' == pattern2[0]) return true;

    if(pattern1.empty() || pattern2.empty()) return false;

    char c1 = pattern1[0];
    char c2 = pattern2[0];
    string subPattern1 = pattern1.substr(1);
    string subPattern2 = pattern2.substr(1);


    if('*' == c1 && '*' == c2)
        return intersect(pattern1, subPattern2) && intersect(subPattern1, pattern2);

    if('*' == c1 && intersect(pattern1, subPattern2)
       || '*' == c2 && intersect(subPattern1, pattern2)
       || c1 == c2 && intersect(subPattern1, subPattern2))
    {
        return true;
    }

    return false;
}

string intersection(const std::string& pattern1, const std::string& pattern2)
{
    if(pattern1.empty() || pattern2.empty()) return "";
    
    if("*" == pattern1 && "*" == pattern2) return "*" ;

    if("*" == pattern1)		return pattern2;
    if("*" == pattern2)		return pattern1;

    // if(pattern2.empty() && '*' == pattern1[0]) return true;
    // if(pattern1.empty() && '*' == pattern2[0]) return true;

    // if(pattern1.empty() || pattern2.empty()) return false;

    char c1 = pattern1[0];
    char c2 = pattern2[0];
    string subPattern1 = pattern1.substr(1);
    string subPattern2 = pattern2.substr(1);


    if('*' == c1 && '*' == c2)
        return intersect(pattern1, subPattern2) && intersect(subPattern1, pattern2);

    if('*' == c1 && intersect(pattern1, subPattern2)
       || '*' == c2 && intersect(subPattern1, pattern2)
       || c1 == c2 && intersect(subPattern1, subPattern2))
    {
        return true;
    }

    return false;
}

int main()
{
	fastio; //Remove for interactive problems

	cini(t);
	fi(it, 0, t)
	{
		cini(n);

		string ans;
		bool flag = true;

		cins(temp);
		fi(i, 1, n)
		{
			cins(s);
			if(intersect(temp, s) && flag)
				temp = intersection(s, temp);
			else
				flag = false;
		}
		if(flag)
		{
			for(auto i:temp)
			{
				if(i != '*')
					ans.push_back(i);
			}
		}
		else
			ans = "*";

		cout << "Case #" << it+1 << ":" sp ans << endl;
	}

	return 0;
}