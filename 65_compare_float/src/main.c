#include<stdio.h>
#include <stdbool.h>

int return_0(float c, float d){
	if (c == d){
		return 0;
	}
	else if (c < d){
		return -1;
	}
	else {
		return 1;
	}
}

int main(void){

	float a;
	float b;
	while (true){
		printf("Entrez deux nombres d�cimaux: ");
		scanf("%f%f",&a,&b);
		int calc = return_0(a, b);

		if (calc == 0){
			printf("Les decimaux sont �gaux \n");
		}
		else {
			printf("Ils ne sont pas �gaux \n" );
			printf("%d \n", calc);
		}
	}

	return 0;
}
