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

int n, k;
sc2(n, k);

int x, i, cnt4=n, cnt2 = 2*n, temp=0, num[4]={0};

fi(i,0,k)
{
	sc(x);

	temp = min( cnt4, x/4);
	cnt4 -= temp;
	x -= temp*4;
	
	if( x < 4)
		num[x]++;

	else
	{
		cnt2 -= x/2;
		x %= 2;
		num[x]++;
	}
}

temp = min(num[3], cnt4);

cnt4 -= temp;
num[3] -= temp;

temp = min(num[3]*2, cnt2);

cnt2 -= temp;
num[3] -= temp/2;

num[2] += num[3];
num[1] += num[3];

num[3] = 0;


temp = min( cnt4, min(num[1], num[2]) );

cnt4 -= temp;
num[1] -= temp;
num[2] -= temp;

if(cnt2 >= num[1]+num[2])
	printf("YES");

else
	printf("NO");
	
return 0;
}
