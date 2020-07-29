#include <bits/stdc++.h>
using namespace std;

#define fi(i,a,b) for(auto i=a;i<b;i++)
#define fd(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define ss second
#define ff first
#define sz(a) a.size()
#define cini(a) int a; cin >> a;
#define cinii(a, b) int a, b; cin >> a >> b;
#define ciniii(a, b, c) int a, b, c; cin >> a >> b >> c;
#define cinl(a) ll a; cin >> a;
#define cinll(a, b) ll a, b; cin >> a >> b;
#define cinlll(a, b, c) ll a, b, c; cin >> a >> b >> c;
#define cinc(c) char c; cin >> c;
#define cins(s) string s; cin >> s;
#define cinvi(v, n) vi v(n, 0); fi(i, 0, n) cin >> v[i];
#define cinvl(v, n) vl v(n, 0); fi(i, 0, n) cin >> v[i];
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define flush fflush(stdout)


int main()
{
	fastio; //Remove for interactive problems

	cini(t);
 
	while(t--)
	{
		cini(n);

		int a[200];
		a[0]=1;
	 
		int dig=0;

		while(n>=2)
		{
			int carry=0;
			fi(i, 0, dig+1)
			{
				carry += (a[i]*n);

				a[i] = carry%10;
				carry /= 10;
			}
	 
			while(carry>0)
			{
				
				a[++dig] = carry%10;
				carry /= 10;
			}

			n--;
		} 

		fd(i, dig, 0)
			cout << a[i];
		
		cout << endl;
	}

	return 0;
}