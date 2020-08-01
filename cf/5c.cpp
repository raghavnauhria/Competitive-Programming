/*
 * Link: http://codeforces.com/contest/5/problem/C
 *
 * Problem: Longest Regular Bracket Sequence
 *
 * @author:    Raghav Nauhria
 * @bio:       https://www.linkedin.com/in/raghavnauhria/
 * @git:       https://github.com/raghavnauhria
 */
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
	cin.tie(NULL);

	string s;
	cin >> s;

	int n = s.size();
	vi d(n, -1);
	vi c(n, -1);

	stack<int> st;

	rep(i, n)
	{
		if(s[i] == '(')
			st.push(i);
		else if(!st.empty())
		{
			d[i] = st.top();
			c[i] = st.top();
			st.pop();

			if(d[i]-1 >= 0 && s[d[i]-1] == ')' && c[d[i]-1] != -1)
				c[i] = c[d[i]-1];
		}
	}

	int max = -1, count = 0;
	rep(i, n)
	{
		if(c[i] == -1)
			c[i] = 0;
		else
			c[i] = (i-c[i]+1);

		if(max < c[i])
		{
			max = c[i];
			count = 1;
		}
		else if(max == c[i])
			count++;
	}

	if(max == 0)
		count = 1;

	cout << max << " " << count << endl;

	return 0;
}