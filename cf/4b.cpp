/*
 * Link: http://codeforces.com/problemset/problem/4/B
 *
 * Problem: Before an Exam
 *
 * @author:    Raghav Nauhria
 * @bio:       https://www.linkedin.com/in/raghavnauhria/
 * @git:       https://github.com/raghavnauhria
 */
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	int d, s;

	cin >> d >> s;
	int a[d][2];

	int smin=0, smax=0, i;
	for(i-0; i<d; i++)
	{
		cin >> a[i][0] >> a[i][1];

		smin += a[i][0];
		smax += a[i][1];
	}

	if( s < smin || s > smax)
	{
		cout << "NO";
		return 0;
	}

	cout <<"YES\n";
	s -= smin;

	for(i=0; i<d; i++)
		if( s >= (a[i][1]-a[i][0]))
		{
			s-= a[i][1]-a[i][0];
			a[i][0] = a[i][1];
		}
		else
		{
			a[i][0] += s;
			s=0;
			break;
		}

	for(i=0; i<d; i++)
		cout << a[i][0] << " ";
	return 0;
}
