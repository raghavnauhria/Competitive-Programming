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

	int n, k;
	cin >> n >> k;

	string s;
	cin >> s;

	int count[26] = {0};

	int i=0;
	while(i<n)
	{
		++count[s[i]-'a'];
		++i;
	}

	i=0;
	while(i<26 && k>=0)
	{
		k -= count[i];
		++i;
	}

	if( k >= 0)
	{
		s.clear();
		cout << s;
		return 0;
	}

	--i;
	k += count[i];
	--i;

	string ans = "";

	for(int j=0; j<n; ++j)
	{
		if(s[j]-'a' > i)
		{
			if(s[j]-'a' == i+1 && k > 0)
			{
				--k;
			}
			else
				ans += s[j];
		}
	}

	cout << ans;

	return 0;
}
