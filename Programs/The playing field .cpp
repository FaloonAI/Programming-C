#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "RU");
	int a[10][10];
	int i, j, k, l;

	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			a[i][j] = 0;
			printf("%d", a[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 10; i++) {
		for (j = 0; j <= i; j++) {
			a[i][j] = i;
		}
	}

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			k = rand() % 10;
			l = rand() % 10;
			if (!(i == k) && (j == l)) {
				a[i][j] = a[i][j] + a[k][l];
				a[k][l] = a[i][j] - a[k][l];
				a[i][j] = a[i][j] - a[k][l];
			}
		}
	}

	for (i = 0; i < 10; i++) {
		for (i = 0; i < 10; i++) {
			switch (a[i][j]) {
			case 1: printf("*"); break;
			case 2: printf("%"); break;
			case 3: printf("$"); break;
			case 4: printf("#"); break;
			case 5: printf("@"); break;
			case 6: printf("!"); break;
			case 7: printf("&"); break;
			case 8: printf("/"); break;
			case 9: printf("<");
			}
			printf("\n");
		}
	}

	return 0;
}