#include<stdio.h>
#include <stdbool.h>

int comparer(const char s1[], const char s2[]){

	int i;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++) {
	}
return s1[i] - s2[i];

}


int main(void){

	char s1[] = "abc";
	char s2[] = "abd";

	int calc = comparer(s1, s2);

	printf("%d", calc);


return 0;
}

