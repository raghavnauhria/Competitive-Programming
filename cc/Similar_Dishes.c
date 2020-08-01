#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int t, ing_num, i, alphabet, count=0;
	char ingredient[8][10];//, comp1[200][45], comp2[200][45];
	
	scanf("%d", &t);
	while(t){
		//char *ingredient[8]= (char*) malloc(10*sizeof(char));
		char *comp1 = (char*) malloc(45*sizeof(char));
		char *comp2 = (char*) malloc(45*sizeof(char));
		ing_num=0;
		count=0;
		
		gets(comp1);
		gets(comp2);
		for(i=0; i< strlen(comp1); i++){
       		if(comp1[i]!=' ')ingredient[ing_num][alphabet++]= comp1[i];
       		else {ing_num++; alphabet=0;}
   			}
   		for(i=0; i< strlen(comp2); i++){
       		if(comp2[i]!=' ')ingredient[ing_num][alphabet++]= comp2[i];
       		else {ing_num++; alphabet=0;}
   			}
			
		for(i=0; i<4; i++)
			for(ing_num=4; ing_num<8; ing_num++)
				if(strcmp(ingredient[i], ingredient[ing_num]) )
					count++;
		
		if(count>=2)	printf("similar\n");
		else			printf("dissimilar\n");
		
		t--;
	}
return 0;
}
