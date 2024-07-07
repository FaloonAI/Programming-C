#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RU");
	srand((unsigned)time(NULL));

	int s = 0, i, k = 1200;

	for (i = 1; k == 1200; i++) {
		if (rand() % 101 > 4) {
			k = 5 + rand() % 4;
			s += k;
		}
	}

	printf("%d Клубней\n", s);

	i = 0;

	while (s > 0) {
		k = 35 + rand() % 16;
		s -= k;
		i++;
	}
	printf("%d Вёдер\n", i);

	k = i / 4;

	printf("%d Мешков\n", k);
	return 0;
}