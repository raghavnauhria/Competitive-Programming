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
#define ASCII_SIZE 26

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--)
	{
		int n, k;
		cin >> n >> k;

		string s;
		cin >> s;

		int num = n/k, ans = 0;

		for(int i=0; i<(k+1)/2; ++i)
		{
			int count[ASCII_SIZE] = {0}, max = 0;			
			for(int j=0; j<num; ++j)
			{
				count[s[i+j*k]-'a']++; 
		        if (max < count[s[i+j*k]-'a'])
		            max = count[s[i+j*k]-'a'];
				
				count[s[(k-1-i)+j*k]-'a']++;
				if (max < count[s[(k-1-i)+j*k]-'a'])
					max = count[s[(k-1-i)+j*k]-'a'];
			}

			if(k%2 == 1 && i==k/2)	max /= 2;
			ans += (max);
		}

		cout << n - ans << endl;
	}

	return 0;
}