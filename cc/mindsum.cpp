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

ll digsum(ll n)
{
	ll ans = 0;
	while(n != 0)
	{
		ans += n%10;
		n /= 10;
	}

	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	ll n, d;
	cin >> t;

	while(t--)
	{
		cin >> n >> d;
		int tn = 1 + (n-1)%9;
		int td = 1 + (d-1)%9;

		int ans = tn, count = 0;
		while(1)
		{
			tn = 1+(tn+td-1)%9;
			if(ans == tn)
				break;
			count++;
			if(tn < ans)
				break;
		}

		if(ans == tn)
			count = 0;

		n += count*d;
		while(n > 9)
		{
			++count;
			n = digsum(n);
		}

		cout << tn << " " << count << endl;
	}

	return 0;
}