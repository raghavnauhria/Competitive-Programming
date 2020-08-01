/*	
 *	Codechef
 *	attempted by Raghav Nauhria
 *
 *	Problem Name: Buggy Calculator
 *	Problem Code: BUGCAL
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(false);

int t;
cin >> t;

int a, b, ans, mul;

while(t--)
{
	cin >> a >> b;

	ans = 0;
	mul = 1;

	while(a || b)
	{
		// add the unit digit of each and consider only unit digit of result
		ans += ( (a%10+b%10)%10 )*mul;
		
		a /= 10;
		b /= 10;
		// to maintain the digit position in final answer
		mul *= 10;
	}

	cout << ans << "\n";
}
return 0;
}
