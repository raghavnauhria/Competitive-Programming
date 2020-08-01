/*
 * Link: http://codeforces.com/problemset/problem/69/A
 *
 * Problem: Young Physicist
 *
 * @author:    Raghav Nauhria
 * @bio:       https://www.linkedin.com/in/raghavnauhria/
 * @git:       https://github.com/raghavnauhria
 */
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int net[3]= { 0 };
	int i, c[3];

	while(n--)
	{	
		for(i=0; i<3; i++)
		{
			scanf("%d", &c[i]);
			net[i] += c[i];
		}
	}

	if( net[0] == 0 && net[1] == 0 && net[2] == 0)
		printf("YES");
	else	printf("NO");

	return 0;
}
