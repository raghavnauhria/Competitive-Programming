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
int n, cnt[7], flag;

while(t--)
{
	sc(n);
	int a[n];
	flag=1;

	fi(i, 0, 7)
		cnt[i] = 0;

	fi(i,0, n)
	{
		sc(a[i]);
		if(a[i] > 7 || a[i] < 1)
			flag=0;
		cnt[a[i]-1]++;
	}

	fi(i, 0, 7)
		if(cnt[i] <= 0)
			flag=0;
	fi(i, 0, n/2)
	{
		if(a[i] != a[n-i-1])
			flag = 0;
		if( i>=1 && a[i]-a[i-1] > 1)
			flag = 0;
	}

	if(flag)
		cout << "yes\n";
	else
		cout << "no\n";
}

return 0;
}