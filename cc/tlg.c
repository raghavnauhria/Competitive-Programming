#include<stdio.h>

int main(){

int n;
scanf("%d", &n);

int points1=0, points2=0, max=0, player, winner, point1, point2;

while(n--){

	scanf("%d %d", &point1, &point2);
	points1+=point1;
	points2+=point2;
	if(points1>points2)
		player = 1;
	else	player = 0;
	
	if(player && (max< points1-points2)){
		max=points1-points2;
		winner=1;
		}
	else	if(max< points2-points1){
			max=points2-points1;
			winner=2;
			}
	}

printf("%d %d", winner, max);

return 0;
}
