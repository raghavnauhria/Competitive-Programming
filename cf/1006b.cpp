#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef pair<ll, ll> pll;
typedef vector<pll> vll;
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
	cin >> n;

	vll a(n);
	for(int i=0; i<n; ++i)
	{
		cin >> a[i].first >> a[i].second;
		if(a[i].first > a[i].second)
		{
			ll temp = a[i].second;
			a[i].second = a[i].first;
			a[i].first = temp;
		}
	}

	vl b(n);
	b[0] = a[0].second;
	int i=1;
	for(; i<n; ++i)
	{
		if(b[i-1] < a[i].first)
			break;
		if(b[i-1] < a[i].second)
			b[i] = a[i].first;
		else
			b[i] = a[i].second;
	}

	if( i < n)
		cout << "NO";
	else
		cout << "YES";

	return 0;
}