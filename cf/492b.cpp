/*
 * Link: http://codeforces.com/problemset/problem/492/B
 *
 * Problem:
 *
 * @author:    Raghav Nauhria
 * @bio:       https://www.linkedin.com/in/raghavnauhria/
 * @git:       https://github.com/raghavnauhria
 */
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

	int n;
	ll l;
	cin >> n >> l;

	vl a(n, 0);

	rep(i, n)
		cin >> a[i];

	sort(a.begin(), a.end());

	long double d = 0;
	rep(i, n-1)
	{
		if(a[i+1] - a[i] > d)
			d = a[i+1] - a[i];
	}

	d /= 2;

	if(d < a[0])
		d = a[0];
	if(d < l-a[n-1])
		d = l-a[n-1];

	cout << fixed;
	cout << d << endl;
	return 0;
}