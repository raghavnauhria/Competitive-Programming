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

int x, y;
cin >> x >> y;

if( x == y )
{
	cout << "=";
	return 0;
}

bool rev = false;
if( x>y)
{
	int temp = x;
	x = y;
	y = temp;
	rev = true;
}

if( x>=3 && y>=3)
{
	if(x<y)
	{
		if(!rev)
			cout << ">";
		else
			cout << "<";
	}
	else
	{
		if(!rev)
			cout << "<";
		else
			cout << ">";
	}
}

if( x == 1)
{
	if(!rev)
		cout << "<";
	else
		cout << ">";
}

if( x == 2)
{
	if(y==3)
	{
		if(!rev)
			cout << "<";
		else
			cout << ">";
	}
	else if(y == 4)
		cout << "=";
	else
	{
		if(!rev)
			cout << ">";
		else
			cout << "<";
	}

}

// if( (long double)log((long double)x)/(1.0*x) > (long double)log((long double)y)/(1.0*y) )
// {
// 	cout << ">";
// }
// else
// 	cout << "<";

return 0;
}