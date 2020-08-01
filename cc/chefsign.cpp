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

int t;
cin >> t;

int count[2], cmax[2], i, flag;
while(t--)
{
	string s;
	cin >> s;
	
	count[0] = count[1] = 0;
	cmax[0] = cmax[1] = 0;
	
	for(i=0; i<s.size(); i++)
	{
		if(s[i] == 60)
		{
			flag=1;
			count[flag]++;
			if(cmax[flag] < count[flag])
				cmax[flag] = count[flag];
			count[(flag+1)%2]=0;
		}
		if(s[i] == 62)
		{	
			flag=0;
			count[flag]++;
			if(cmax[flag] < count[flag])
				cmax[flag] = count[flag];
			count[(flag+1)%2]=0;
		}
	}
	if( cmax[0] == 0 && cmax[1] == 0)
		cout << "1\n";
	else
		cout << 1+max(cmax[0],cmax[1]) << "\n";
}
return 0;
}
