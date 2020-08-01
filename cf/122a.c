#include<stdio.h>

int main()
{
int n;
scanf("%d", &n);

if( !(n%4) || !(n%7) || !(n%47) || !(n%74) || !(n%447) || !(n%774) || !(n%747) || !(n%474) || !(n%477) )
printf("YES");
else
printf("NO");

return 0;
}
