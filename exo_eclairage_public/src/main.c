#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool is_Day;
bool Partial_night;
int Hour = 120;
int intensity = 0;



int intense_light(bool Partial_night, int Hour) {
	if ((Hour >= 0) && (Hour <= 300)) {
		intensity = 70;
		return intensity;
	}
	else if (Partial_night == true) {
		intensity = 50;
		return intensity;
	}
	else {
		intensity = 100;
		return intensity;
	}
}



int main(void){
	if (is_Day == false) {
		intensity = intense_light(Partial_night, Hour);
		printf("Il est %d et l'intensité est de %d %% ", Hour, intensity);
	}


	return 0;
}
