#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>



int count_Vowel_fix(int lenVowel, char Line[], int i, char Vowel[], int nbVowel) {
	for (int j = 0; j < lenVowel; j++) {
		if (Line[i] == Vowel[j]) {
			nbVowel += 1;
		}
	}
	return nbVowel;
}

int count_Cons_fix(int lenCons, char Line[], int i, char Consonant[],
		int nbCons) {
	for (int k = 0; k < lenCons; k++) {
		if (Line[i] == Consonant[k]) {
			nbCons += 1;
		}
	}
	return nbCons;
}



int main(void){

	char Text[] = "Bonjour, je suis heureux d'être au campus";

	FILE * file_text = NULL;
	char Line[15];
	int i = 0;

	file_text = fopen ("/home/corentin/Atollic/TrueSTUDIO/STM32_workspace_9.3/61_count_char_file/src/text.txt", "r");




    char Vowel[] = {'a','e','i','o','u','y','A','E', 'I', 'O', 'U', 'Y', 'é', 'à', 'è', 'ù', 'â', 'ê', 'î', 'ô', 'û'};
	char Consonant[] = {'b','c','d','f','g','h','j','k','l','m', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z',
						'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Z', 'ç'};

	int lenText = 0;
	int lenVowel = 0;
	int lenCons = 0;
	lenText = strlen(Line);
	lenVowel = strlen(Vowel);
	lenCons = strlen(Consonant);


	int nbVowel = 0;
	int nbCons = 0;
	int nbLetters;
	float percent_vowel = 0;
	float percent_cons = 0;
	int is_vowel;

	while (fgets(Line, 15, file_text) != NULL) {
		printf("%s", Line);
		for (int i = 0; Line[i] != '\0'; i++) {
		is_vowel = 0;
			/*nbVowel = count_Vowel_fix(lenVowel, Line, i, Vowel, nbVowel);
			nbCons = count_Cons_fix(lenCons, Line, i, Consonant, nbCons);*/
			for (int j = 0; j < lenVowel; j++) {
					if (Line[i] == Vowel[j]) {
						nbVowel += 1;
						is_vowel = 1;
						break;
					}
			}
			for (int k = 0; k < lenCons && !is_vowel; k++) {
					if (Line[i] == Consonant[k]) {
						nbCons += 1;
						break;
					}
			}
		}
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

