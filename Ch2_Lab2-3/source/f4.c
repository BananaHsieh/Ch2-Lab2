#include<stdio.h>
#include<stdlib.h>

int Ming_4() {

	//(4)---------------------------------
	printf("(4)\n");
	int x = 1, y = 8;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i > 0 && i < 5) {
				if (j == x || j == y)printf("X");
				else printf("-");
			}
			if (i == 0)printf("X");
			if (i > 4)printf("-");
		}
		if (i > 0) {
			x++; y--;
		}
		printf("\n");
	}
}