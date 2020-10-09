#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define carre(x) (x) * (x)

int main() {
	int nb = 5;
	printf("le carre de %d vaut %d \n", nb, carre(nb));
	printf("le carre de %d vaut %d", nb + 1, carre(nb + 1));


}