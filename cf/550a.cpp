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
typedef unordered_map<int, int> umap;
typedef priority_queue<int> pq;

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
	cin.tie(NULL);

	string s;
	cin >> s;

	int n = s.size(), count=0;

	for(int i=0; i<n; ++i)
	{
		if(count == 0)
		{
			if(s[i] == 'A' && i<n-1 && s[i+1] == 'B')
				count++,i++;
		}
		else if(count == 1)
		{
			if(s[i] == 'B' && i<n-1 && s[i+1] == 'A')
				count++;
		}
	}
	if(count == 2)
	{
		cout << "YES\n";
		return 0;
	}
	else
		count = 0;

	for(int i=0; i<n; ++i)
	{
		if(count == 0)
		{
			if(s[i] == 'B' && i<n-1 && s[i+1] == 'A')
				count++,i++;
		}
		else if(count == 1)
		{
			if(s[i] == 'A' && i<n-1 && s[i+1] == 'B')
				count++;
		}
	}

	if(count == 2)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}