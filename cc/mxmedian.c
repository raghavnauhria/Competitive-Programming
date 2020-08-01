#include <stdio.h>
#include<stdlib.h>
 
void mergeSort(int [], int, int, int);
void partition(int [],int, int);

int n;

int main(){

    int t;
    scanf("%d", &t);
    
    int i;
    
    while(t--){
    
    	scanf("%d", &n);
    	int* list= (int*) malloc(n*2*sizeof(int));
    	
    	for(i = 0; i < 2*n; i++)
    		scanf("%d", &list[i]);
    	
    	partition(list, 0, 2*n - 1);
    	
    	printf("%d\n", list[(3*n-1)/2]);
    	for(i=1; i<=n; i++)
    		printf("%d %d ", list[n-i], list[n+i-1]);
 	
    
    }
    return 0;
}

void partition(int list[],int low,int high)
{
    int mid;
 
    if(low < high)
    {
        mid = (low + high) / 2;
        partition(list, low, mid);
        partition(list, mid + 1, high);
        mergeSort(list, low, mid, high);
    }
}
 
void mergeSort(int list[],int low,int mid,int high)
{
    int i, mi, k, lo, temp[2*n];
 
    lo = low;
    i = low;
    mi = mid + 1;
    while ((lo <= mid) && (mi <= high)){
        if (list[lo] <= list[mi])
        {
            temp[i] = list[lo];
            lo++;
        }
        else
        {
            temp[i] = list[mi];
            mi++;
        }
        i++;
    }
    if (lo > mid)
    {
        for (k = mi; k <= high; k++)
        {
            temp[i] = list[k];
            i++;
        }
    }
    else
    {
        for (k = lo; k <= mid; k++)
        {
             temp[i] = list[k];
             i++;
        }
    }
 
    for (k = low; k <= high; k++)
    {
        list[k] = temp[k];
    }
}
