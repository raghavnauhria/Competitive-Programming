#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int t, n, k, p, ing, i, flag, flag2;
	scanf("%d", &t);
	
	while(t--){
		scanf("%d%d", &n, &k);
		int* ing_arr= (int*) calloc(k, sizeof(int));
		flag2=0;
		while(n--){
			flag=0;
			scanf("%d", &p);
			while(p--){
				scanf("%d", &ing);
				ing_arr[ing-1]++;
			}
			for(i=0; i<k; i++)
				if(ing_arr[i]>0)
					flag++;
			if(flag==k && n==1) {printf("all\n"); flag2=1;}
			if(flag==k && n>1) {printf("some\n"); flag2=1;}
						
		}
		if(flag2!=1) printf("sad\n");
	}

return 0;
}
