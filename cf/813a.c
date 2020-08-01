#include<stdio.h>
#include<stdlib.h>

int findnext( int key, int w[], int m)
{
    int low=0, high = m, mid=-1;
    int flag = 0;

    while(low<high)
    {
        mid=(low+high)/2;
        if(w[mid] == key)
        {
            flag = 1;
            break;
        }
        else if(w[mid]<key)
            low=mid+1;
        else
            high = mid ;

    }
    if(flag)
        return mid;
    else
    {
        if(low >= m)
            return -1;
        else
    	      return low;
    }
}

int main()
{
int n;
scanf("%d", &n);

int t, i, sum=0;

for(i=0; i<n; i++)
{
	scanf("%d", &t);
	sum += t;
}

int m;
scanf("%d", &m);

int w[2*m];

for(i=0; i<2*m; i+=2)
	scanf("%d %d", &w[i], &w[i+1]);
	
int index = findnext( sum, w, 2*m);

if(index == -1)
{
	printf("%d\n", index);
	return 0;
}

if(index%2 == 0)
	printf("%d\n", w[index]);
else	printf("%d\n", sum);

return 0;
}
