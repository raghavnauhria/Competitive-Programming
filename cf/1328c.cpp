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

	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;
		string x;
		cin >> x;

		string a = "1", b = "1";
		int isGreat = -1;

		for(int i = 1; i<n; ++i)
		{
			if(x[i] == '0')
			{
				a = a + '0';
				b = b + '0';
			}
			else
			{
				if(isGreat == -1)
				{
					a = a + '1';

					if(x[i] == '1')
					{
						b = b + '0';
						isGreat = 0;
					}
					else
					{
						b = b + '1';
					}
				}
				else if(isGreat == 0)
				{
					a = a + '0';
					b = b + x[i];
				}
				else
				{
					a = a + x[i];
					b = b + '0';
				}
			}
		}

		cout << a << "\n" << b << endl;
	}

	return 0;
}