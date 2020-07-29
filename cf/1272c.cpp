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

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;

	ll ans = 0;

	// string s;
	// cin >> s;
	char s;

	vector<char> keys(k);
	for(int i=0; i<k; ++i)
	{
		cin >> keys[i];
	}

	cin.ignore('\n');
	ll counter = 0;
	for(int i=0; i<n; ++i)
	{
		cin >> s;
		cin.ignore('\n');
		
		auto it = std::find (keys.begin(), keys.end(), s);
		if(it != keys.end())
			counter++;
		else
		{
			if(counter%2 == 0)
				ans += (counter/2)*(counter+1);
			else
				ans += (counter)*((counter+1)/2);
			counter = 0;
		}
	}

	if(counter%2 == 0)
		ans += (counter/2)*(counter+1);
	else
		ans += (counter)*((counter+1)/2);
	cout << ans << endl;

	return 0;
}