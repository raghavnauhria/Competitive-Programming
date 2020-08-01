#include<stdio.h>
#include<math.h>

int main(){

int t,n,ans;
scanf("%d", &t);

while(t--){
scanf("%d", &n);
ans= (int) sqrt( (float) n );
printf("%d\n", ans);
}

return 0;
}
