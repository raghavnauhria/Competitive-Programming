/*
 * Link: http://codeforces.com/problemset/problem/1/A
 *
 * Problem: Theatre Square
 *
 * @author:    Raghav Nauhria
 * @bio:       https://www.linkedin.com/in/raghavnauhria/
 * @git:       https://github.com/raghavnauhria
 */
#include <stdio.h>

int main(){
	long long int n, m, a;
	scanf("%lld%lld%lld", &n, &m, &a);
	n= (n+a-1)/a;
	m= (m+a-1)/a;
	printf("%lld", n*m);

	return 0;
}