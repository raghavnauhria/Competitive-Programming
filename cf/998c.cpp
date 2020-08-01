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

	int n;
	ll x, y;
	cin >> n >> x >> y;

	char c;
	string s;

	bool one = false;

	cin >> c;
	if(c == '1')
		one = true;

	s += c;

	rep(i, n-1)
	{
		cin >> c;
		if(c == '1')
		{
			if(!one)
			{
				one = true;
				s += c;
			}
		}
		else
		{
			if(one)
			{
				one = false;
				s += c;
			}
		}
	}

	int z = 0;
	n = s.size();

	rep(i, n)
		if(s[i] == '0')
			++z;

	if(z==0)
	{
		cout << 0;
		return 0;
	}
	
	ll ans=0;
	if( x > y)
		ans = z*y;
	else
		ans = (z-1)*x + y;

	cout << ans;

	return 0;
}