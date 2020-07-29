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

	int t;
	cin >> t;

	for(int i=0; i<t; ++i)
	{
		int n, k, p;
		cin >> n >> k >> p;

		vector<int> plates[n];
		vector<int> p_sum[n];
		for(int ii=0; ii<n; ++ii)
		{
			for(int jj=0; jj<k; ++jj)
			{
				int temp;
				cin >> temp;
				plates[ii].push_back(temp);
				p_sum[ii].push_back(temp);
			}
		}
		for(int ii=0; ii<n; ++ii)
		{
			for(int jj=1; jj<k; ++jj)
			{
				p_sum[ii][jj] += p_sum[ii][jj-1];
			}
		}

		int dp[100][2000] = {};
		for(int ii=1; ii<=n; ++ii)
		{
			for(int jj=0; jj<=p; ++jj)
			{
				int max = dp[ii-1][jj], temp;
				for(int iter=1; iter<=jj; ++iter)
				{
					if(iter-1 >= k)
						temp = p_sum[ii-1][k-1];
					else
						temp = p_sum[ii-1][iter-1];
					if(max < dp[ii-1][jj-iter] + temp)
						max = dp[ii-1][jj-iter] + temp;
				}
				dp[ii][jj] = max;
			}
		}

		// for(int ii=0; ii<=n; ++ii)
		// {
		// 	for(int jj=0; jj<=p; ++jj)
		// 	{
		// 		cout << dp[ii][jj] << " ";
		// 	}
		// 	cout << endl;
		// }

		int ans = dp[n][p];
		cout << "Case #" << i+1 << ": " << ans << "\n";
	}

	return 0;
}