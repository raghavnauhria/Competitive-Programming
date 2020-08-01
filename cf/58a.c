/*
 * Link: http://codeforces.com/problemset/problem/58/A
 *
 * Problem: Chat room
 *
 * @author:    Raghav Nauhria
 * @bio:       https://www.linkedin.com/in/raghavnauhria/
 * @git:       https://github.com/raghavnauhria
 */
#include <stdio.h>
#include <string.h>

int search( char a[], int l, int i, char b[], int j)
{
	int k;
	for(k=i; k < l; k++)
		if( a[k] == b[j] )
			break;
	
	if( k == l )
		return -1;
	else	return k;

}

int main()
{
	char b[5] = "hello";
	char a[100];
	scanf("%s", a);

	int i=0, j=0, l = strlen(a);

	i=search(a, l, i, b, j);

	while( i>=0 && i< l && j< 5)
	{
		j++;
		i = search(a, l, i+1, b, j);
	}

	if( j == 5 )
		printf("YES");
	else
		printf("NO");

	return 0;
}
