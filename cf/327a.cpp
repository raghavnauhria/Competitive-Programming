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

int n;
sc(n);

int a[n], i, x, count=0;

fi(i,0,n)
{
	sc(x);
	if(x==1)
	{
		count++;
		a[i]=-1;
	}
	else
		a[i]=1;
}

int tempmax=0, netmax=0;

fi(i,0,n)
{
	tempmax += a[i];
	if(netmax < tempmax)
		netmax = tempmax;
	
	if(tempmax < 0)
		tempmax = 0;
}

count += netmax;

if(netmax==0)
	count--;

cout << count;
return 0;
}