#include<stdio.h>

int lcm( int i, int j)
{
int lcm, x;
if(i > j)
	lcm = i;
else	lcm = j;

for(x=1; x< (i*j)/lcm; x++)
	if( (lcm*x)%i == 0 && (lcm*x)%j == 0)
		break;

return lcm*x;
}


int main()
{
int div[4], d, i, j, k;

for(i=0; i<4; i++)
	scanf("%d", &div[i]);
scanf("%d", &d);

int num =0;
num -= d/ lcm( lcm( lcm(div[0], div[1]), div[2]), div[3]);

for(i=0; i<4; i++)
{
	num += d/div[i];
	for(j=i+1; j<4; j++)
	{
		num -= d/lcm(div[i], div[j]);
		for(k=j+1; k<4; k++)
		{
			num += d/lcm(lcm(div[i], div[j]),div[k]);				
		}
	}
}

printf("%d", num);

return 0;
}
