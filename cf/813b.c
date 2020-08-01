#include<stdio.h>
#include<math.h>

double x, y;
double maxpowx, maxpowy;

int isSum( double key, long double a[], int k)
{
int j;

for(j=0; j<=k; j++)
	if(a[j] == key)
		return 1;

return 0;
}

int main()
{
double l, r;

scanf("%lf %lf %lf %lf", &x, &y, &l, &r);

maxpowx = log10(r)/log10(x);
maxpowy = log10(r)/log10(y);

//printf("%d %d\n", maxpowx, maxpowy);

int len, max = 0, k=0;

double i, j;
long double a[(int)maxpowx*(int)maxpowy];

for(i=0; i<= maxpowx; i++)
	for(j=0; j<=maxpowy; j++)
		a[k++] = pow(x, i) + pow(y, j);
k--;
while(k)
{printf("%Lf ", a[k]);
k--;	}
/*k--;

for(i=l; i<=r; i++)
{
	if( isSum(i, a, k) )
		len = 0;
	else	len++;
	
	if(max<len)
		max = len;
		
}

printf("%d\n", max);
*/
return 0;
}
