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
bool isVowel(char c)
{
	if(c == 'a'|| c == 'o' || c=='u' || c== 'i'|| c == 'e')
		return true;
	else
		return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;
	int n = s.size();
	s += s[n-1];
	++n;
	bool ans = true;
	int i=0;
	for(; i<n-1; ++i)
	{
		if(!isVowel(s[i]))
		{
			if(s[i] == 'n')
				continue;
			else
			{
				if(!isVowel(s[i+1]))
				{
					ans = false;
					break;
				}	
			}
		}
	}

	if(ans)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}