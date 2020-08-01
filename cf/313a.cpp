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
ios::sync_with_stdio(false);

ll n, n1, n2;
cin >> n;

if(n >= 0)
	cout << n;
else
{
	n *= (-1);

	n1 = n/10;
	n2 = n1 - n1%10 + n%10;

	n1*= (-1);
	n2*= (-1);
	
	if(n1>n2)
		cout << n1;
	else
		cout << n2;
}
return 0;
}
