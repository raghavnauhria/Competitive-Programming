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

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int count = 0, t, M, x, y, input, i1, i2;

	cin >> t;

	while(t--)
	{
		// cout << t << endl;
		cin >> M >> x >> y;
		x *= y;
		int a[100] = {0};
		count = 0;

		while(M--)
		{
			// cout << M << endl;
			cin >> input;
			i1 = input-x-1;
			i2 = input+x-1;
			if(i1 < 0)
				i1 = 0;
			if(i2 > 99)
				i2 = 99;

			for(int i=i1; i<=i2; ++i)
			{
				a[i] = 1;
			}
		}

		rep(i, 100)
			count += a[i];

		cout << 100-count  << endl;
	}

	return 0;
}