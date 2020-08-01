#include <stdio.h>
 
int main()
{
    int no, i, c, root, temp;
 
    scanf("%d", &no);
    
    int heap[101], sum=0, mysum = 0;
    
    for (i = 0; i < no; i++)
    {
    	scanf("%d", &heap[i]);
    	sum+= heap[i];
    }
    
    for (i = 1; i < no; i++)
    {
        c = i;
        do
        {
            root = (c - 1) / 2;             
            if (heap[root] < heap[c])
            {
                temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            c = root;
        } while (c != 0);
    }
 
    for (i = no - 1; i >= 0 && no>1; i--)
    {
        temp = heap[0];
        heap[0] = heap[i];    /* swap max element with rightmost leaf element */
        heap[i] = temp;
        
        root = 0;
        do 
        {
            c = 2 * root + 1;    /* left node of root element */
            if ( heap[c] < heap[c + 1] && c < (i-1) )
                c++;
                
            if (heap[root]<heap[c] && c<i)    /* again rearrange to max heap array */
            {
                temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            root = c;
        }
        while (c < i);
    }
    //printf("%d\n", sum);
    //for( i=no-1; i>=0; i--)	printf("%d ", heap[i]);
    for( i = no-1; i>=0; i--)
    {
    	sum -= heap[i];
    	mysum+= heap[i];
    	
    	if( mysum > sum)
    	{
    		printf("%d", no-i);
    		break;
    	}
    }
    
    return 0;

}
