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

	while(t--)
	{
		int n, k=1;
		cin >> n;
		vi a(n+1, 0);
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		a[n] = a[0];
		vi colors(n+1, 0);
		colors[0] = 1;
		colors[n] = 1;

		bool hold = false;

		for(int i=0; i<n; ++i)
		{
			if(a[i] == a[i+1])
			{
				if(hold)
					colors[i] = 1;
				else
				{
					if(i != 0)
					{
						if(colors[i-1] != 1)	colors[i] = 1;
						else					colors[i] = 2;

						k = max(k, colors[i]);
					}
					hold = true;
				}
			}
			else
			{
				if(hold)
				{
					if(i == n-1)
					{
						if(k==1)	k++;
						
						colors[i] = k;
					}
					else
						colors[i] = 1;

					hold = false;
				}
				else
				{
					if(i == n-1)
					{
						if(colors[i-1] != 2)	colors[i] = 2;
						else					colors[i] = 3;

						k = max(k, colors[i]);
					}
					else
					{
						if(colors[i-1] != 1)	colors[i] = 1;
						else					colors[i] = 2;

						k = max(k, colors[i]);
					}
				}
			}
		}

		cout << k << "\n";
		for (int i = 0; i < n; ++i)
			cout << colors[i] << " ";
		cout << "\n";
	}

	return 0;
}