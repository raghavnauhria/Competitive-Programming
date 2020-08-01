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

int a[10], temp, j, flag;

fi(i,0,t)
{
	fi(j,0,10)
		a[j] = 0;
	flag=0;

	string x;
	getline(cin, x);
	for(j=0; j<x.length(); j++)
	{
		temp = x[j]-'0';
		if(temp>0)
			flag=1;
		if(flag)
			a[temp]++;
	}

	if (a[6] > 0)
	{
		a[6]--;
		fi(j,5,10)
		{
			if(a[j] > 0)
				printf("%c", 60 + j);
		}
		a[6]++;
	}
	if (a[7] > 0)
	{
		a[7]--;
		fi(j,0,10)
		{
			if(a[j] > 0)
				printf("%c", 70 + j);
		}
		a[7]++;
	}
	if (a[8] > 0)
	{
		a[8]--;
		fi(j,0,10)
		{
			if(a[j] > 0)
				printf("%c", 80 + j);
		}
		a[8]++;
	}
	if(a[9] > 0 && a[0] > 0)
		printf("Z");
	printf("\n");
}
return 0;
}
