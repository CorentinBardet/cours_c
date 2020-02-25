#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool is_Day;
bool Partial_night;
int Hour;
int intensity;


/*int eco_return(){
	night = 1440 - ()
	while night
}*/



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
	while (true){
		intensity = 0;
		is_Day = false;
		Partial_night = false;
		printf("Saisissez l'heure en minute entre 0(0h00) et 1439(23h59): ");
		scanf("%d", &Hour);
		if ((Hour >= 480) && (Hour <= 960)){
			is_Day = true;
		}
		if (((Hour >= 450) && (Hour < 480)) || ((Hour > 960) && (Hour <= 990))) {
			Partial_night = true;
		}
		if (is_Day == false) {
			intensity = intense_light(Partial_night, Hour);
		}
		printf("Il est %d et l'intensité est de %d %% \n", Hour, intensity);
	}
	return 0;
}
