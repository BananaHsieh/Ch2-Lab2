#include<stdio.h>
#include<stdlib.h>

int main(void) 
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
	//(2)---------------------------------
	printf("(2)\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {

			if (i == 0 || i == 1 || i == 2 || i == 7 || i == 8 || i == 9)printf("X");
			else if (j == 0 || j == 1 || j == 2 || j == 7 || j == 8 || j == 9)printf("X");
			else printf("-");
		}
		printf("\n");
	}
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
	//(4)---------------------------------
	printf("(4)\n");
	int x = 1, y = 8;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i >0&&i<5  )  {
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

				if (i <=4) {
					if (j == q || j == w)printf("X");
					else printf("-");
				}
				

			}
			q--; w++;
		printf("\n");
	}
	system("pause");
	return 0;
}