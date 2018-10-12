#include<stdio.h>
#include<stdlib.h>

int Ming_1()
{
	//(1)---------------------------------
	printf("(1)\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {

			if (i == 0 || i == 9)printf("X");
			else if (j == 0 || j == 9)printf("X");
			else printf("-");
		}
		printf("\n");
	}
	
}