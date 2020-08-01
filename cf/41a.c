/*
 * Link: http://codeforces.com/problemset/problem/41/A
 *
 * Problem: Translation
 *
 * @author:    Raghav Nauhria
 * @bio:       https://www.linkedin.com/in/raghavnauhria/
 * @git:       https://github.com/raghavnauhria
 */
#include <stdio.h>
#include <string.h>

int main()
{
	char a[100], b[100];
	int i;

	scanf("%s %s", a, b);

	int l = strlen(a);

	for( i=0; i<l; i++)
	{
		if(a[i] != b[l-1-i] )
			break;
	}

	if(i >= l)
		printf("YES");
	else	printf("NO");

	return 0;
}
