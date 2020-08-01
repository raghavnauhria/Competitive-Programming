/*
 * Link: http://codeforces.com/problemset/problem/61/A
 *
 * Problem: Ultra-Fast Mathematician
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

	string a, b;
	int i;

	cin >> a;
	cin >> b;

	string ans = a;

	for(i=0; i<a.length(); i++)
		if(a[i] == b[i])
			ans[i] = '0';
		else	ans[i] = '1';

	cout << ans;

	return 0;
}
