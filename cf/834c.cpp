#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef pair<ll, ll> pll;
typedef vector<pll, pll> vll;
typedef pair<int, ii> tri;
typedef vector<tri> viii;

#define fi(i,a,b) for(auto i=a;i<b;i++)
#define rep(i,n) fi(i,0,n)
#define fd(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define sz(a) a.size()

int main()
{

int n;
scanf("%d", &n);

ll a, b, root, mul;

while(n--)
{
	scanf("%lld %lld", &a, &b);
	mul = a*b;
	
	root = round(cbrt(mul));
	
	if( mul == root*root*root && a%root==0 && b%root==0)
		printf("Yes\n");
	else
		printf("No\n");
}

return 0;
}
