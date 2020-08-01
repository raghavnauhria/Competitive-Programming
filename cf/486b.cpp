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

int m, n;
cin >> m >> n;

int i, j, k, b[m][n], a[m][n];

for(i=0; i<m; i++)
	for(j=0; j<n; j++)
	{
		cin >> b[i][j];
		a[i][j] = 1;
	}

for(i=0; i<m; i++)
	for(j=0; j<n; j++)
		if(b[i][j] == 0)
		{
			for(k=0; k<m; k++)
				a[k][j] = 0;
			for(k=0; k<n; k++)
				a[i][k] = 0;
		}

int ab[m][n], flag=0;
		
for(i=0; i<m; i++)
	for(j=0; j<n; j++)
	{
		flag=0;
		for(k=0; k<m && flag != 1; k++)
			if(a[k][j] == 1)
			{
				ab[i][j] = 1;
				flag = 1;
			}
		for(k=0; k<n && flag != 1; k++)
			if(a[i][k] == 1)
			{
				ab[i][j] = 1;
				flag = 1;
			}
		if(flag == 0)
			ab[i][j] = 0;
	}

for(i=0; i<m; i++)
{
	for(j=0; j<n; j++)
		if(b[i][j] != ab[i][j])
			break;
	if(j<n)
		break;
}


if( i==m && j==n)
{
	cout << "YES\n";
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}
}
else	cout << "NO";
return 0;
}
