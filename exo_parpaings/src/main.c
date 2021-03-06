#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int ref_weight = 19000;
int ref_width = 200;
int ref_length = 500;
int ref_height = 200;
int value_weight;
int value_width;
int value_length;
int value_height;
int weight_input;
int width_input;
int length_input;
int height_input;
int tolerance;
int tolerance_input;


bool in_range(value, ref, tolerance) {
	int val_min;
	int val_max;
	val_min = ref - (ref * tolerance / 100);
	val_max = ref + (ref * tolerance / 100);
	if ((value <= val_max) && (value >= val_min)) {
		return true;
	}
	else {
		return false;
	}
}


int check_number_error() {
	int cpt_error = 0;
	if (! in_range(value_width, ref_width, tolerance )) {
		cpt_error += 1;
	}
	if (! in_range(value_length, ref_length, tolerance)) {
		cpt_error +=1;
	}
	if (! in_range(value_height, ref_height, tolerance)) {
		cpt_error +=1;
	}
	return cpt_error;
}




int main(int argc , char* argv []) {




	printf("Saisissez une valeur pour le poids(en g): ");
	weight_input = scanf("%d", &value_weight);
	printf("Saisissez une valeur pour la largeur(en mm): ");
	width_input = scanf("%d", &value_width);
	printf("Saisissez une valeur pour la longueur(en mm): ");
	length_input = scanf("%d", &value_length);
	printf("Saisissez une valeur pour la hauteur(en mm): ");
	height_input = scanf("%d", &value_height);
	printf("Saisissez une valeur pour la tolerance(en mm): ");
	tolerance_input = scanf("%d", &tolerance);


	int cpt = 0;
	cpt = check_number_error();
	if (in_range(value_weight, ref_weight, tolerance)){
		if (cpt <= 1){
			printf("Categorie A");
		}
		else {
			printf("Categorie B");
		}
	}
	else {
		if (cpt == 0 ){
			printf("Categorie B");
		}
		else {
			printf("Categorie C");
		}
	}
	return 0;
}
