/*
 * Link: http://codeforces.com/problemset/problem/50/B
 *
 * Problem: Choosing Symbol Pairs
 *
 * @author:    Raghav Nauhria
 * @bio:       https://www.linkedin.com/in/raghavnauhria/
 * @git:       https://github.com/raghavnauhria
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	long long int a[256], i, ans=0;
	for(i=0; i<256; i++)
		a[i] = 0;
		
	string s;
	cin >> s;

	for(i=0; i< s.length(); i++)
		a[ s[i] ] ++;
		
	for(i=0; i<256; i++)
		ans += a[i]*a[i];
		
	cout << ans;

	return 0;
}
