#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
double p[5], sum=0; 
int i;
for(i=0; i<5; i++)
{
	scanf("%lf", &p[i]);
	sum += p[i];
}
int n, k;
scanf("%d %d", &n, &k);

double net=1;

while(k--)
{
	net*=sum;
}

net += (n-k)*(1-sum);
net = log10(net);
net = floor(net);
int ans = (int) net;
printf("%d", ans);


return 0;
}
