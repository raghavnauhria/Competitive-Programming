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

int t;
cin >> t;

double n, k;
double ans;

while(t--)
{
	cin >> n >> k;

//	ans = 1.0 - 1.0/(double)k;
//	ans = (n-1)*( (2*(k-1)) /k);
//	ans = 2*(double)(n-1)*(double)(k-1);
//	ans = ans/(double)k;
	ans = n - (n+k-1)/k;
	ans *= 2;
	ans += 2;

	printf("%.7lf\n", ans);
}

return 0;
}
