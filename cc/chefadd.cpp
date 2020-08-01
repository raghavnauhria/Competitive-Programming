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

int getNext(int n) 
{ 
    int c = n, c0 = 0, c1 = 0; 
  
    while (((c & 1) == 0) && (c != 0)) 
    { 
        c0 ++; 
        c >>= 1; 
    } 
    while ((c & 1)==1) 
    { 
        c1++; 
        c >>= 1; 
    } 
  
    if (c0 +c1 == 31 || c0 +c1== 0) 
        return -1; 
  
    int p = c0 + c1; 
  
    n |= (1 << p); 
  
    n &= ~((1 << p) - 1); 
  
    n |= (1 << (c1 - 1)) - 1; 
  
    return n; 
} 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	int a, b, c, ans = 0;

	while(t--)
	{
		cin >> a >> b >> c;
		a = (1 << __builtin_popcount(a))- 1;
		int temp = __builtin_popcount(b);
		ans = 0;

		while(a<c)
		{
			// cout << a << endl;
			if(__builtin_popcount(c-a) == temp)
			{
				ans++;
				// cout << c-a << " yo\n";
			}
			a = getNext(a);
		}

		cout << ans << endl;
		// cout << getNext(2);
	}

	return 0;
}