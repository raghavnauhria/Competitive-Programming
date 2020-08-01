#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld,ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<pd> vpd;

typedef map<int,int> mii;
typedef map<char,int> mci;

#define pb push_back
#define mp make_pair
#define itr ::iterator it
#define fi first
#define se second
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define flush fflush(stdout)

#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define dec(i,a,n) for(ll i=n-1;i>=a;i--)
#define SZ(x) ((int)(x).size())
#define remax(a,b) a=max(a,b)
#define remin(a,b) a=min(a,b)
#define LC(i) 2*(i)+1
#define RC(i) 2*(i)+2
#define MID(i,j) ((i)+(j))/2
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))

#define print(v) for (auto it = v.begin(); it != v.end(); ++it) cout << *it << ' '; cout << endl;
#define printm(m) for (auto it = m.begin(); it != m.end(); ++it) cout << it->first<<' '<<it->second << endl; cout << endl;
#define disparr(arr,n) for(ll i=0;i<(n);i++)   cout<<arr[i]<<' ';  cout<<endl;
#define debug(x) cout << x << endl;
#define debug2(x,y) cout << x << " " << y << endl;
#define debug3(x,y,z) cout << x << " " << y << " " << z << endl;


const int MOD = 1000000007;
const ll INF = 1e18;
const ld PI=3.141592653589793238462643383279502884197169399375105820974944;

bool Cmp(pair<int, ll> a, pair<int, ll> b)
{
    return (a.fi > b.fi);
}

int main()
{
	// fastio; //Remove for interactive problems
    int T;
    cin>>T;
    rep(t,1,(T+1))
    {
        cout<<"Case #"<<t<<": ";
        int n, d;
        cin>>n>>d;
        map<ll,int> count;
        ll ai;
        rep(i,0,n)
        {
            cin>>ai;
            count[ai]+=1;
        }
        vector<pair<int,ll>> cnt;
        for (auto y: count)
        {
            cnt.pb(mp(y.se,y.fi));
        }
        sort(all(cnt),Cmp);
        if(cnt[0].fi>=d)
        {
            cout<<"0\n";
            continue;
        }
        if(d==2)
        {
            cout<<"1\n";
            continue;
        }
        bool fg=false;;
        for(auto y:count)
        {
            if(count.find(2*y.fi)!=count.end())
            {
                fg=true;
                break;
            }
            if(y.se==2)
            {
                for(auto z:count)
                {
                    if(z.fi>y.fi)
                    {
                        fg=true;
                        break;

                    }
                    
                }
            }
            if(fg)
                break;
        }
        if(fg)
        {
            cout<<"1\n";
            continue;
        }
        else
        {
            cout<<"2\n";
        }
    }
	return 0;
}