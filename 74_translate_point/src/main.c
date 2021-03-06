#include<stdio.h>
#include <math.h>




typedef struct {
	int x;
	int y;
}point;


void translate(point* z, float dx, float dy){

	(*z).x = dx;
	z->y = dy;
}


float calc_distance(point a, point b) {
	float distance = (b.x - a.x)*(b.x - a.x)+(b.y - a.y)*(b.y- a.y);
	distance = sqrtf(distance);
	return distance;
}




int main(void){

	point a;
	a.x = 6;
	a.y = 6;

	point b;
	b.x = 2;
	b.y = 2;


	float distance = calc_distance(a, b);

	printf("Les coordonnées du point 'a' sont: x=%d ; y=%d \n", a.x, a.y);
	printf("Les coordonnées du point 'b' sont: x=%d ; y=%d \n", b.x, b.y);
	printf("La distance entre les deux points est de: %.2f \n", distance);

	translate(&b, 8, 12);

	distance = calc_distance(a, b);

	printf("Les coordonnées du point 'a' sont: x=%d ; y=%d \n", a.x, a.y);
	printf("Les coordonnées du point 'b' sont: x=%d ; y=%d \n", b.x, b.y);
	printf("La distance entre les deux points est de: %.2f\n", distance);



	return 0;
}
