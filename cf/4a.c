/*
 * Link: http://codeforces.com/problemset/problem/4/A
 *
 * Problem: Watermelon
 *
 * @author:    Raghav Nauhria
 * @bio:       https://www.linkedin.com/in/raghavnauhria/
 * @git:       https://github.com/raghavnauhria
 */
#include <stdio.h>

int main(){
	int w;
	scanf("%d", &w);
	if(w%2==0 && w!=2)	printf("YES\n");
	else		printf("NO\n");

	return 0;
}
