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

int n, m;
sc2(n, m);

if(m < n)
{
	printf("%d\n", n-m);
	return 0;
}

vector<int> d(10002, -1);
d[n] = 0;

queue<int> q;
q.push(n);

int top;

while( !q.empty() )
{
	top = q.front();
	
	if(top == m)
	{
		cout << d[top] <<"\n";
		return 0;
	}
	
	q.pop();
	
	if(2*top <= 10000)
		if(d[2*top] == -1)
		{
			d[2 * top] = d[top] + 1;
			q.push(2*top);
		}
	
	if (top > 1 && d[top - 1] == -1)
	{
		d[top - 1] = d[top] + 1;
		q.push(top - 1);
	}
}
return 0;
}
