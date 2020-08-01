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

int main()
{
ios::sync_with_stdio(false);

int t;
cin >> t;

int i, rem3, flag, maxindex;

while(t--)
{
	rem3 = 0;
	flag = -1;
	maxindex = -1;
	
	string s;
	cin >> s;

	vector<int> a;

	for(i=0; i< s.length(); i++)
		a.push_back(s[i]-48);

	for(i=0; i<a.size(); i++)
		rem3 = (rem3 + a[i]%3)%3;

	if(a[a.size() - 1] % 2 == 1)
	{
		if(a[a.size() - 1]%3 == rem3 && a[a.size() - 2]%2 == 0)
		{
			a.pop_back();
			flag = 1;
		}
		else
			flag = 0;
	}
	else
	{
		for(i=0; i<a.size()-1; i++)
			if(a[i]%3 == rem3 && flag == -1)
			{
				maxindex = i;
				if(a[i] < a[i+1])
				{
					flag = 1;
					maxindex = i;
				}
			}

		if(maxindex >= 0)
			flag = 1;

		if(flag == -1 && (a[a.size()-2]%2 != 0 || a[a.size()-1]%3 != rem3 ) )
			flag = 0;
		else
			flag = 1;

		if(maxindex >= 0)
			a.erase(a.begin()+maxindex);
		else
			a.pop_back();
	}

	if(flag)
	{
		for(i=0; i<a.size(); i++)
			cout<<a[i];
	}
	else
		cout << "-1";

	cout <<"\n";
}

return 0;
}
