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

char x;
int i, j, index[2];
cin.ignore();

while(t--)
{
	string name;
	getline(cin,name);
	j=0;
	index[0] = index [0] = -1;
	
	for(i=0;i<name.size();i++)
	{
		if(name[i] <= 90 && name[i] >= 65)
			name[i] += 32;
		if(name[i] == 32 )
		{
			index[j++] = i;
			if(name[i+1] >= 97)
				name[i+1] -= 32;
			i++;
		}
	}
	name[0] -= 32;
	if(j == 0)
		cout << name;
	else
	{
		cout << name[0] << ". ";
		if(j==1)
		{
			for(i=index[0]+1; i<name.size(); i++)
				cout << name[i];
		}
		else
		{
			cout << name[index[0]+1] << ". ";
			for(i=index[1]+1; i<name.size(); i++)
				cout << name[i];
		}
	}
	cout << "\n";
}
return 0;
}
