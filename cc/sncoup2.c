#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, i; 
    scanf("%d",&t);
    for(i = 0; i < t; i++)
    {
        int n,j,k=0,p=0,l;
        scanf("%d",&n);
        char s[2][n];
        for(j=0;j<2;j++)
        scanf("%s",s[j]);
        
        for(j=0;j<n;j++)
        	if(s[0][j]=='*')
        	{
			k=1;
			break;
		}
	
	  for(j=0;j<n;j++)
		if(s[1][j]=='*'&&k==1)
		{
			p++;
			k=0;
			break;
		}

	  for(j=0,k=0,l=0;j<n;j++)
        {
		if(s[0][j]=='*' && k==0)
			k=1;
		else if (s[0][j]=='*' && k==1)
			{
				if(l==1)
					l=0;
				p++;
			}
	
		if(s[1][j]=='*' && l!=1)
				l=1;
		else if (s[1][j]=='*'&&l==1)
			{
				if(k==1)
					k=0;
				p++;
			}
		}

		printf("%d\n",p);
    }
    return 0;
}
