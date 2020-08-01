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

int main()
{
ios::sync_with_stdio(false);
int n;
cin >> n;

bool gem[6] = {false};

for(int i=0; i<n; ++i)
{
	string s;
	cin >> s;

	if(s == "purple")
		gem[0] = true;
	else if(s == "green")
		gem[1] = true;
	else if(s == "blue")
		gem[2] = true;
	else if(s == "orange")
		gem[3] = true;
	else if(s == "red")
		gem[4] = true;
	else if(s == "yellow")
		gem[5] = true;
}

cout << 6-n << endl;

if(!gem[0])
	cout << "Power\n";
if(!gem[1])
	cout << "Time\n";
if(!gem[2])
	cout << "Space\n";
if(!gem[3])
	cout << "Soul\n";
if(!gem[4])
	cout << "Reality\n";
if(!gem[5])
	cout << "Mind\n";

return 0;
}