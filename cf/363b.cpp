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
	vi a(n, 0);
	for(int i=0; i<n; ++i)
		cin >> a[i];

	ll min_sum = 0, current_sum = 0;
	int min_index = 0;
	for(int i=0; i<k; ++i)
		min_sum += a[i];

	current_sum = min_sum;

	for(int i=1; i<n-k+1; ++i)
	{
		current_sum = current_sum - a[i-1] + a[i+k-1];

		if(min_sum > current_sum)
		{
			min_sum = current_sum;
			min_index = i;
		}
		if(min_sum == 1)
			break;
	}

	cout << min_index+1 << endl;

	return 0;
}