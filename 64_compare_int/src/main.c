#include<stdio.h>
#include <stdbool.h>

int return_0(int c, int d){
	if (c == d){
		return 0;
	}
	else{
		return 1;
	}
}

int main(void){

	int a;
	int b;
	while (true){
		printf("Entrez deux nombres entiers: ");
		scanf("%d%d",&a,&b);
		int calc = return_0(a, b);

		if (calc == 0){
			printf("Les entiers sont �gaux \n");
		}
		else{
			printf("Ils ne sont pas �gaux \n" );
		}
	}

	return 0;
}
