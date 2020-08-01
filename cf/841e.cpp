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

bool isPerfectSquare(ll n)
{
    ll squareRootN=(ll)round((sqrt(n)));

    if(squareRootN*squareRootN == n)
    {
        return true;
    }
     else
     {
        return false; 
     }
}

int main()
{
ios::sync_with_stdio(false);

int n;
sc(n);

vl sets[300];

ll flag=0, i, j, x;

fi(i,0,n)
{
	sc4(x);

	flag = 0;

	for(j=0; j<300 && !sets[j].empty(); j++)
	{
		if(isPerfectSquare(x*sets[j][0]))
		{
			sets[j].push_back(x);
			flag=1;
			break;
		}
	}

	if(!flag)
	{
		sets[j].push_back(x);
	}
}


return 0;
}
