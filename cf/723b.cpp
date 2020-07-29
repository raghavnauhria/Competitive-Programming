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

	int n;
	cin >> n;
	string s;
	cin >> s;

	bool para = false;
	int inside = 0, longest = 0, current = 0;

	for(int i=0; i<n; ++i)
	{
		if(s[i] == '(')
		{
			para = true;
			current = 0;
		}
		else if(s[i] == ')')
		{
			para = false;
		}
		else if(para)
		{
			if(s[i] != '_' && (s[i+1] == '_' || s[i+1] == ')') )
				inside++;
		}
		else
		{
			if(s[i] != '_')
			{
				current++;
				longest = max(longest, current);
			}
			else
				current = 0;
		}
	}

	cout << longest << " " << inside << endl;

	return 0;
}