#include<stdio.h>
#include <math.h>





double calc_distance(int x_1, int x_2, int y_1, int y_2) {
	double distance = (x_2 - x_1)*(x_2 - x_1)+(y_2 - y_1)*(y_2 - y_1);
	distance = sqrt(distance);
	return distance;
}




int main(void){


	double distance = calc_distance(10, 20, 10, 20);

	printf("%.2f", distance);




	return 0;
}