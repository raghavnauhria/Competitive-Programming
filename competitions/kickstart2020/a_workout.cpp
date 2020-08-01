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

// Function to print the set 
void printSet(multiset<int> myset) 
{ 
  
    // Get the iterator 
    multiset<int>::iterator it; 
  
    // printing all the elements of the set 
    for (it = myset.begin(); it != myset.end(); ++it) 
        cout << ' ' << *it; 
    cout << '\n'; 
} 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	for(int i=0; i<t; ++i)
	{
		int n, k;
		cin >> n >> k;
		vi a(n, 0);
		// vi diff(n-1,0);
		multiset<int> myset;
		for(int j=0; j<n; ++j)
			cin >> a[j];
		for(int j=0; j<n-1; ++j)
			myset.insert(a[j+1]-a[j]);

		// printSet(myset);

		while(k--)
		{
			int temp = *myset.rbegin();
			myset.erase(std::prev(myset.end()));
			myset.insert(temp/2);
			myset.insert(temp-temp/2);
		}

		int ans = *myset.rbegin();
		cout << "Case #" << i+1 << ": " << ans << "\n";
	}

	return 0;
}