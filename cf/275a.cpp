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

	int a[3][3], b[3][3];

	for(int i=0; i<3; ++i)
		for(int j=0; j<3; ++j)
		{
			cin >> a[i][j];
			b[i][j] = 1 + a[i][j];
		}

	for(int i=0; i<3; ++i)
		for(int j=0; j<3; ++j)
		{
			if(j>0)
				b[i][j-1]+= a[i][j];
			if(j<2)
				b[i][j+1]+= a[i][j];
			if(i>0)
				b[i-1][j]+= a[i][j];
			if(i<2)
				b[i+1][j]+= a[i][j];
		}

	for(int i=0; i<3; ++i)
	{
		for(int j=0; j<3; ++j)
		{
			// a[i][j]++;
			b[i][j] %= 2;
			cout << b[i][j];
		}
		cout << "\n";
	}

	return 0;
}