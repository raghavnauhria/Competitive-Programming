#include<stdio.h>
#include<math.h>

int main(){

int t;
scanf("%d", &t);

int b, ls;

while(t--){

scanf("%d %d", &b, &ls);
printf("%f %f\n", sqrt(ls*ls-b*b), sqrt(ls*ls+b*b));
}

return 0;
}
