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


bool cust(const pair<pair<int,int>, int> &a, const pair<pair<int,int>, int> &b) 
{
	if(a.first.first == b.first.first)
		return (a.first.second > b.first.second);
	else
		return (a.first.first < b.first.first);
    // return (a.second < b.second); 
} 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, l, r, end=1;
	cin >> n;

	vector<pair<pair<int, int>, int> > a(n);
	for(int i=0; i<n; ++i)
	{
		cin >> l >> r;
		a[i] = make_pair(make_pair(l, r), i+1);
		if(end < r) end = r;
	}

	sort(a.begin(), a.end(), cust);
	if(end == a[0].first.second)
		cout << a[0].second << endl;
	else
		cout << "-1\n";


	return 0;
}