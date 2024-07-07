#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "RU");
	int a[10][10];
	int i, j;
	int i0, j0;
	int max, imax, jmax;

	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			a[i][j] = rand()%100;
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	scanf("%d %d", &i0, &j0);
	max = a[i0 - 1][j0 - 1], imax = i0 - 1, jmax = j0 - 1;
	if (a[i0 - 1][j0] > max) {
		max = a[i0 - 1][j], imax = i0 - 1, jmax = j0;
	}
	if (a[i0 + 1][j0 + 1] > max) {
		max = a[i0 + 1][j0 + 1];
		jmax = j0 + 1;
		imax = i0 + 1;
	}

	printf("В клетки %d - %d, находится %d еды", imax, jmax, max);

	return 0;
}