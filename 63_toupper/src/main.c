#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <wchar.h>

void my_to_upper(char Line[128], int i) {
	if (Line[i] >= 97 && Line[i] <= 122) {
		Line[i] = Line[i] - 32;
	}
}
/*else if(Line[i] >= 65 && Line[i] <= 90){
				Line[i] = Line[i] +32;
			}*/


int main(void){

	//char Text[] = "Bonjour, je suis heureux d'Ãªtre au campus";

	FILE * file_text = NULL;
	char Line[128];


	file_text = fopen ("/home/corentin/Atollic/TrueSTUDIO/STM32_workspace_9.3/61_count_char_file/src/text.txt", "r+");




    char Vowel[] = {'a','e','i','o','u','y','A','E', 'I', 'O', 'U', 'Y', 'é','à','è','ù','â','ê','î','ô','û'};
	char Consonant[] = {'b','c','d','f','g','h','j','k','l','m', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z',
			'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Z', 'ç'};



	int nbVowel = 0;
	int nbCons = 0;
	int nbLetters = 0;
	float percent_vowel = 0;
	float percent_cons = 0;




	while (fgets(Line, 128, file_text) != NULL) {
		//printf("%s", Line);

		for (int i = 0; Line[i] != '\0'; i++) {
			my_to_upper(Line, i);

			for (int j = 0; Vowel[j] != '\0'; j++) {
					if (Line[i] == Vowel[j]) {
						nbVowel += 1;
					}
			}
			for (int k = 0; Consonant[k] != '\0'; k++) {
					if (Line[i] == Consonant[k]) {
						nbCons += 1;
					}
			}
		}
		printf("%s", Line);
	}

	nbLetters = nbVowel + nbCons;


	printf("Nombre de Voyelles : %d\n", nbVowel);
	printf("Nombre de Consonnes : %d\n", nbCons);
	printf("Nombre de lettres: %d\n", nbLetters);


	percent_vowel = ((nbVowel * 100.00) / nbLetters);
	percent_cons = (100.00 - percent_vowel);
	printf("Pourcentage de voyelles: %.2f %%\n", percent_vowel);
	printf("Pourcentage de consonnes: %.2f %%\n", percent_cons);


	fclose(file_text);

	return 0;
}
