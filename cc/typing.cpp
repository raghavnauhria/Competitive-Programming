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


int calc(string s)
{
	int ans = 2;

	for(int i=1; i<s.size(); ++i)
	{
		if((int)(s[i]-'h')*(int)(s[i-1]-'h') > 0)
			ans += 4;
		else
			ans += 2;
	}

	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n;
	cin >> t;

	string s;
	int ans = 0, temp = 0;

	while(t--)
	{
		cin >> n;

		ans = 0;
		unordered_map <string, int> mp;
		for(int i=0; i<n; ++i)
		{
			cin >> s;
			if(mp.count(s) > 0)
			{
				ans += mp[s]/2;
			}
			else
			{
				temp = calc(s);
				ans += temp;
				mp[s] = temp;
			}
		}

		cout << ans << endl;
	}

	return 0;
}