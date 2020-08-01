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

int n, a[3];
cin >> n >> a[0] >> a[1] >> a[2];

int count[n+1], i, j;

fi(i,0,n+1)
	count[i]=-12003;

count[0]=0;

fi(j,0,3)
	fi(i,a[j],n+1)
		count[i] = max(count[i], count[i-a[j]]+1);

cout << count[n];

return 0;
}
