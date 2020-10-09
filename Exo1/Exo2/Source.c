#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
	long unsigned nb = 2868838400;
	printf("%lu est code sur %d octets et %d bits\n", nb, sizeof(nb), sizeof(nb) * 8);

	for (int i = 0; i < sizeof(nb) * 8; i++) {
		if ((nb>>i) & 1) {
			printf("bit %d = ON\n", i);
		}
		else{
			printf("bit %d = OFF\n", i);

		}
		
	}
	printf("\nje vous remercie d'avoir utilise mon programme, bye !\n");

}