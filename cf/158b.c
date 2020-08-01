#include<stdio.h>
#include<stdlib.h>

int main(){

int n, i, temp;
scanf("%d", &n);

int * freq = (int*) calloc(4, sizeof(int));
for( i=0; i<n; i++)
{
	scanf("%d", &temp);
	freq[temp-1]++;
}

/*int count = freq[3] + freq[2] + freq[1]/2 + freq[0]/4;

freq[1] %= 2;
freq[0] %= 4;
freq[0] -= freq[2];

if(freq[0] > 0)
{	
	count++;
	count += ( freq[0]+freq[1] ) / 4;
	//if(freq[1]) count += 1 + (freq[0]+1)/4;
	//else count += (freq[0]+3)/4;
}
	
else count+= (freq[1]+1)/2;

printf("%d", count);*/

int cnt = freq [3];
 
    cnt += freq [2];
 
    freq [0] -= freq [2];
 
    cnt += (freq [1] / 2);
 
    freq [1] -= (freq [1] / 2 * 2);
 
    if (freq [1]) {
        cnt++;
        freq [0] -= 2;
    }
 
    if (freq [0] > 0) {
        cnt += (freq [0] / 4);
        freq [0] -= (freq [0] / 4 * 4);
 
        if (freq [0] > 0) cnt++;
    }
 printf ("%d\n", cnt);
return 0;
}
