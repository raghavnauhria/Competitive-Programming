#include<iostream>
#include<string>
#include<stdlib.h>
#include<vector>

using namespace std;

int main()
{
ios::sync_with_stdio(false);

string s;
cin >> s;

const string a = "heavy";
const string b = "metal";

size_t pos = 0, fa = 0, fb = 0;
int fac = 0, j=0, x;
vector<int> posn;
long long int ans = 0;
static const size_t npos = -1;

fa = s.find( a, pos);
fb = s.find( b, pos);
	
while( (fa < s.length() && fa >=0)|| (fb < s.length() && fb >=0))
{
	if(fa < fb)
	{
		x=0;
		posn.push_back(x);
		pos = fa+3;
		fa = s.find( a, pos);
	}
	else
	{
		x=1;
		posn.push_back(x);
		pos = fb+3;
		fb = s.find( b, pos);
	}
}		


for(j=0; j< posn.size(); j++)
{
	if(posn[j] == 0)	
		fac++;
	else
		ans += fac;
}
	
cout << ans ;

return 0;
}
