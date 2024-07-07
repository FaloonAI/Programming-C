#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RU");
	srand((unsigned)time(NULL));

	int i, j, k, l, n;

	scanf("%d, %d\n", &i, &j);
	scanf("%d, %d\n", &k, &l);
	if ((i + j + k + l) % 2 == 1) {
		printf("Никогда");
	}
	if ((j == k) || (i == l)) {
		printf("0 Ходов");
	}
	if(abs(l - k) == abs(j - l)) {
		printf(" 1 Ход");
	}

	else {
		n = 2;
	}

	printf("2 Хода");

	return 0;
}