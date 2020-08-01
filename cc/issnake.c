#include<stdio.h>

int I =0, J=0; 
int N;

int initialcol( char s[2][N])
{
int i;

for(i=0; i<N; i++)
	if(s[0][i] == '#' || s[1][i] == '#')
		return i;
}	

int algo( char s[2][N], int I1, int J1)
{
int flag_col=0;
I = I1;
J = J1;

while(J<N)
{
	if(flag_col == 1 )
	{
		if(J+1 < N)
		{
			if( s[I][J+1] == '#')
			{
				J++;
				flag_col = 0;
			}
			else	return 1;
		}
		else return 0;				//CHECK	
	}
	else
	{
		if(s[(I+1)%2][J] == '#')		// REMEMBER J || J+1
		{
			I = (I+1)%2;
			flag_col = 1;
		}
		else	if(J+1 < N)
			{
				if(s[I][J+1] == '#')
					J++;
				else	return 1;
			}
			else return 0;			//CHECK
	}
}

return 0;
}	

int main()
{
int t;
scanf("%d", &t);

int i, j,k, startj, starti, startflag, flag_end, flag_check, flag, count =0;

for( k=0; k<t; k++)
{
	scanf("\n%d", &N);
	char s[2][N];
	
	
	scanf("\n");
	for(j=0; j<N; j++)
		scanf("%c", &s[0][j]);
		
	scanf("\n");
	for(j=0; j<N; j++)
		scanf("%c", &s[1][j]);

	
	startj = initialcol(s);
	
	flag=0;
	startflag = 1;
	count =0;
	
	if( s[0][startj] == '#')
		if( s[1][startj] == '#')
		{
			startflag = 2;
		}
		else	starti = 0;
	else
			starti = 1;

	while(startflag--){
	
	flag_end = algo(s, starti, startj);
	
	if(flag_end == 0)
	{
		count++;//printf("yes\n");
		flag = 1;
	}
	//if( startflag == 2 && flag != 1)
	//	flag_end = algo(s, (starti+1)%2, startj);	
	
	//if(flag_end == 0 && flag != 1)
	//{
	//	printf("yes\n");
	//	flag = 1;
	///}
	
	flag_check = 0;
	//printf("%d\n%d\n", I, J);
	for(i = (I+1)%2; i<2; i++)
		for(j= J+1; j<N; j++)
			if(s[i][j] == '#')
			{
				flag_check = 1;
				break;
			}
	if(flag_check != 1 && flag != 1)
		count++;	//printf("no\n");
	//else	if(flag != 1) count++;//printf("yes\n");
	}
	if(count > 0)
		printf("yes\n");
	else	printf("no\n");
	
}

return 0;
}
