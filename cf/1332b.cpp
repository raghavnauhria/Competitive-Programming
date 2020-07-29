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
		int n;
		cin >> n;
		vi a(n, 0);
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		int primes[11] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
		vi col(n, 0);
		int m=1;
		bool flag = false;

		for (int i = 0; i < 11; ++i)
		{
			if(flag)	++m;

			flag = false;
			for (int j = 0; j < n; ++j)
			{
				if(col[j] == 0 && a[j]%primes[i] == 0)
				{
					col[j] = m;
					flag = true;
				}
			}
		}

		if(!flag) --m;
		cout << m << endl;
		for (int i = 0; i < n; ++i)
		{
			cout << col[i] << " ";
		}
		cout << endl;
	}

	return 0;
}