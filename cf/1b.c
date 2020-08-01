/*
 * Link: http://codeforces.com/problemset/problem/1/B
 *
 * Problem: Spreadsheets
 *
 * @author:    Raghav Nauhria
 * @bio:       https://www.linkedin.com/in/raghavnauhria/
 * @git:       https://github.com/raghavnauhria
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int n;
	scanf("%d", &n);

	char s[20];
	int rows=0, cols, i, flag;
	char col[20];

	while(n--)
	{
		scanf("%s", s);
		
		flag=0;
		for( i=0; i<strlen(s)-1; i++)
		{
			if(isalpha(s[i])^isalpha(s[i+1]))
				flag++;
		}
		
		if(flag==1)
		{
			cols=0;
			for(i=0; isalpha(s[i]); i++)
				cols = cols*26 + (s[i]-'A'+1);
			rows=0;
			for(; s[i] != '\0'; i++)
				rows = rows*10 + s[i] - '0';
			
			printf("R%dC%d\n", rows, cols);
		}
		
		else
		{
			rows=0;
			for(i=1; !isalpha(s[i]); i++)
				rows = rows*10 + s[i] - '0';
			cols=0;
			for(++i; s[i] != '\0'; i++)
				cols = cols*10 + s[i] - '0';
			
			i=0;	
			while(cols)
			{
				col[i]= cols%26 + 64;
				if(col[i] == 64)
				{
					col[i] += 26;
					cols -= 26;
				}
				i++;
				cols/=26;
			}
			i--;
			for(; i>=0; i--)
				printf("%c", col[i]);
			printf("%d\n", rows);
		}	
	}

	return 0;
}