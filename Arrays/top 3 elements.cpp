#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "RU");
	srand((unsigned)time(NULL));
	int a[100], i;

	for (i = 0; i < 100; i++) {
		a[i] = 1 + rand() % 10000;
		printf("%8d", a[i]);
	}

	int max1 = a[0], max2 = a[1], max3 = a[2];

	if (a[1] > max1) {
		max1 = a[1];
		max2 = a[0];
	}
	else {
		max2 = a[1];
	}
	if (a[2] > max1) {
		max3 = max2;
		max2 = max1;
		max1 = a[2];
	}
	else {
		max3 = a[2];
	}
	if (a[2] > max2) {
		max3 = max2;
		max2 = a[2];
	}
	else {
		max3 = a[2];
	}

	for (i = 3; i < 100; i++) {
		if (a[i] > max1) {
			max3 = max2;
			max2 = max1;
			max1 = a[i];
		}
		else if (a[i] > max2) {
			max3 = max2;
			max2 = a[i];
		}

		else if (a[i] > max3) {
			max3 = a[i];
		}
	}

	printf("\nТри наибольших элемента: %d, %d, %d\n", max1, max2, max3);
	return 0;
}