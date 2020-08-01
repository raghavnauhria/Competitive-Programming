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
#define MOD 1000000007

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, b;
	cin >> n >> b;

	vi a(n, 0);
	vi even(n, 0), odd(n, 0);

	rep(i, n)
	{
		cin >> a[i];
	}

	if(a[0]%2 == 0)
		even[0]++;
	else
		odd[0]++;

	fi(i, 1, n)
	{
		if(a[i]%2 == 0)
		{
			even[i] = even[i-1]+1;
			odd[i] = odd[i-1];
		}
		else
		{
			even[i] = even[i-1];
			odd[i] = odd[i-1] + 1;
		}
	}

	vi dif;

	fi(i, 0, n-1)
	{
		if(even[i] == odd[i])
		{
			dif.pb(abs(a[i]-a[i+1]));
		}
	}

	sort(dif.begin(), dif.end());

	int ans = 0;

	int i=0;
	while(b>=0 && i<dif.size())
	{
		b -= dif[i];
		ans++;
		++i;
	}

	if(b < 0)
	{
		b += dif[i-1];
		--ans;
	}

	cout << ans << endl;
	
	return 0;
}