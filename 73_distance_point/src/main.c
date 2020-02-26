#include<stdio.h>
#include <math.h>



typedef struct {
	int x;
	int y;
}point;



float calc_distance(point a, point b) {
	float distance = (b.x - a.x)*(b.x - a.x)+(b.y - a.y)*(b.y- a.y);
	distance = sqrtf(distance);
	return distance;
}




int main(void){

	point a;
	a.x = 10;
	a.y = 10;

	point b;
	b.x = 20;
	b.y = 20;

	float distance = calc_distance(a, b);

	printf("Les coordonnées du point 'a' sont: x=%d ; y=%d \n", a.x, a.y);
	printf("Les coordonnées du point 'b' sont: x=%d ; y=%d \n", b.x, b.y);
	printf("La distance entre les deux points est de: %.2f", distance);



	return 0;
}
