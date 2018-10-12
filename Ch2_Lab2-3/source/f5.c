#include<stdio.h>
#include<stdlib.h>

int Ming_5() {

	//(5)---------------------------------
	printf("(5)\n");
	int q = 0, w = 9;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {

			if (i <= 4) {
				if (j == q || j == w)printf("X");
				else printf("-");
			}
			//if ( i > 4) {
				//if (j == o || j == p )printf("X");
				//else printf("-");
			//}
		}
		q++; w--;
		printf("\n");
	}
	q = 4; w = 5;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {

			if (i <= 4) {
				if (j == q || j == w)printf("X");
				else printf("-");
			}


		}
		q--; w++;
		printf("\n");
	}
}