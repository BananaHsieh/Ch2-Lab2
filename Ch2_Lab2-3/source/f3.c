#include<stdio.h>
#include<stdlib.h>

int Ming_3() {
	//(3)---------------------------------
	printf("(3)\n");
	int a = 4, b = 5;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i < 4) {
				if (j == a || j == b)printf("X");
				else printf("-");
			}
			if (i == 4)printf("X");
			if (i > 4)printf("-");
		}

		a--; b++;
		printf("\n");
	}

}