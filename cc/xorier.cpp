#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef pair<ll, ll> pll;
typedef vector<pll, pll> vll;
typedef pair<ii, int> tri;
typedef vector<tri> viii;

#define fi(i,a,b) for(auto i=a;i<b;i++)
#define rep(i,n) fi(i,0,n)
#define fd(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define sz(a) a.size()
#define sc(x) scanf("%d", &x)
#define sc2(x, y) scanf("%d %d", &x, &y)
#define sc3(x) scanf("%s", x)
#define sc4(x) scanf("%lld", &x)
#define sc5(x, y) scanf("%lld %lld", &x, &y)

int main()
{
    ios::sync_with_stdio(false);
    
    int t, n;
    cin >> t;

    while(t--)
    {
        cin >> n;
        vi a(n);

        int e = 0, o = 0;

        unordered_map<int, int> count;
        rep(i, n)
        {
            cin >> a[i];
            if(count.find(a[i]) != count.end())
                count[a[i]]++;
            else
            {
                count[a[i]] = 1;
                if(a[i]%2 == 0)
                	++e;
                else
                	++o;
            }
        }

        auto it = count.begin();
        int e_t = 0, o_t = 0;
        for(; it != count.end(); ++it)
        {
        	if(it->first %2 == 0)
        		e_t += it->second-1;
        	else
        		o_t += it->second-1;
        }

        int ans = (e*(e-1)/2) + (e-1)*e_t + (o*(o-1)/2) + (o-1)*o_t;
        rep(i, n)
        {
        	//cout << ans << endl;
        	int temp = a[i]^2;
        	if(count.find(temp) != count.end())
        		ans -=  count[temp];
        	count[a[i]]=0;
        }

        cout << ans << endl;
    }

    return 0;
}
