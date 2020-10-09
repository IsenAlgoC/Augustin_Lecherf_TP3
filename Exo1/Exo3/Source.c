#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define nb_max_notes 30

int main() {
	float tableau[nb_max_notes] = { -2 };
	int rep = 0;
	int absence = 0;
	int notes_valides = 0;
	float val_total = 0;
	float moyenne = 0;
	float max = 0;
	float min = 20;
	float ecart_type = 0;
	float e_t = 0;
	for (int j = 0; j < nb_max_notes; j++) {
		tableau[j] = -2;
	}

	for (int i = 0; i < nb_max_notes; i++) {
		printf("Entrez la note no %d ",i+1);
		scanf_s("%f", &tableau[i]);
		if (tableau[i] < 0 || tableau[i]>20) {
			printf("Eleve absent ? ou voulez-vous arreter la saisie des notes?0/1/2\n");
			scanf_s("%d", &rep);
			switch (rep) {
			case 0:
				tableau[i] = -1;
				absence += 1;
				break;
			case 1:
				i = nb_max_notes - 1;
				break;
			case 2:
				printf("incorect, entrez une valeur comprise entre 0 et 20 inclus ");
				scanf_s("%f", &tableau[i]);
				notes_valides += 1;
				val_total = val_total + tableau[i];
				break;
			default:
				printf("erreur");
				break;
			}
		}
		else{
		
			if (tableau[i] > max) { max = tableau[i]; }
			if (tableau[i] < min) { min = tableau[i]; }
			notes_valides += 1;
			val_total = val_total + tableau[i];
		}
		
	}
	printf("no         note\n\n");
	for (int i = 0; i < nb_max_notes; i++) {
		printf("%d          %0.2f\n",i, tableau[i]);

	}
	moyenne = val_total / (float)notes_valides;
	for (int x = 0; x < 30; x++) {
		if ((tableau[x] != -1) && (tableau[x] != -2)) {
			e_t = e_t+((tableau[x] - moyenne) * (tableau[x] - moyenne));
		}
	}
	ecart_type = sqrt((1 / ((float)notes_valides - 1))*e_t);
	

	printf("il y a %d notes valides et %d absences\n",notes_valides, absence);
	printf("La valeur max vaut %.2f et la la valeur min vaut %.2f\n", max, min);
	printf("La moyenne vaut %.2f\n", moyenne);
	printf("L'écart type vaut %f", ecart_type);
	
}