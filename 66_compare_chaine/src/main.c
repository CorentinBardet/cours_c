#include<stdio.h>
#include <stdbool.h>

int comparer(const char s1[], const char s2[]){

	int i;
	for (i = 0; ((s1[i] != '\0') || (s2[i] != '\0')); i++) {
		int ascii_s1 = s1[i];
		int ascii_s2 = s2[i];

		if (ascii_s1 == ascii_s2) {
			continue;
		}
		else if (ascii_s1 < ascii_s2) {
			return -1;
		}
		else {
			return 1;
	    }
	}
return 0;

}


int main(void){

	char s1[] = "abc";
	char s2[] = "ABC";

	int calc = comparer(s1, s2);

	if (calc == 0) {
		printf("Les deux chaines sont �gales \n");
	}
	else if (calc == -1){
		printf("%s est avant %s \n", s1, s2);
	}
	else {
		printf("%s est apres %s \n", s1, s2);
	}


return 0;
}
