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
typedef unordered_map<int, int> umap;
typedef priority_queue<int> pq;

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

ll getSum(ll a)
{
	return (a*(a+1)/2);
}

ll min_n_2(ll X)
{ 
    ll low = 1, high = X;
    int N = 0;
  
    while (low <= high) { 
        ll mid = (high + low) / 2;

        if (getSum(mid) < X) { 
            N = mid; 
            low = mid + 1; 
        } 
  
        else
            high = mid - 1; 
    } 
  
    return N;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--)
	{
		ll n, k;
		cin >> n >> k;

		ll left, right;
		left = min_n_2(k);
		// cout << left << endl;
		right = k - left*(left+1)/2;

		string ans(n, 'a');

		ans[n-left-2] = 'b';
		ans[n-right] = 'b';

		cout << ans << endl;
	}

	return 0;
}