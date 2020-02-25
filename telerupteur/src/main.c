#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



bool light_on(int button, bool bool_state_light) {
	if (button == 1) {
		bool_state_light = true;
		printf("bouton 1 allume \n");
		return bool_state_light;
	}
	else if (button == 2) {
		bool_state_light = true;
		printf("bouton 2 allume \n");
		return bool_state_light;
	}
	else {
	printf("valeur invalide \n");
	return bool_state_light;
	}
}


bool light_off(int button, bool bool_state_light) {
	if (button == 1) {
		bool_state_light = false;
		printf("bouton 1 eteind \n");
		return bool_state_light;
	}
	else if (button == 2) {
		bool_state_light = false;
		printf("bouton 2 eteind \n");
		return bool_state_light;
	}
	else {
	printf("valeur invalide \n");
	return bool_state_light;
	}
}




int main(int argc, char *argv[])
{

	bool bool_state_light = false;
	int button = 0;
	int button_input;


	while (true) {
		printf("Saisissez 1 ou 2 pour appuyer sur bouton 1 ou bouton 2: \n");
		fflush (stdin);
		button_input = scanf("%d", &button);

		if (button_input == 1){
			if (bool_state_light == false) {
				light_on(button, bool_state_light);
			}
			if (bool_state_light == true) {
				light_off(button, bool_state_light);
			}
		}
	}
	return 0;
}
