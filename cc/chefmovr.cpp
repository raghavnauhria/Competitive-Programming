/*	
 *	Codechef
 *	attempted by Raghav Nauhria
 *
 *	Problem Name: Chef and Mover
 *	Problem Code: CHEFMOVR
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

int main()
{
ios::sync_with_stdio(false);

int t;
sc(t);

ll n, d, i, sum, ans;

while(t--)
{
	sc5(n, d);
	int a[n];
	
	sum = ans = 0;
	
	fi(i,0,n)
	{
		sc(a[i]);
		sum += a[i];
	}
	
	// mover unfruitful if sum is not divisible by n
	if(sum%n != 0)
	{
		cout << "-1\n";
		continue;
	}
	
	sum /= n;
	
	for(i=0; i<n-d; i++)
	{
		ans += abs(sum - a[i]);
		a[i+d] += (a[i]-sum);
		a[i] = sum;
	}
		
	for(i=0; i<n; i++)
		if(a[i] != sum)
			break;
	
	if(i<n)
		cout << "-1\n";
	else	cout << ans << endl;
}

return 0;
}
