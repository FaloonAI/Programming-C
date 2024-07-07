#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RU");
	srand((unsigned)time(NULL));

	int m = 0, t = 0, m0, t0;
	while ((m < 5000) && (t < 240)) {
		t0 = 5 + rand() % 3;
		m0 = rand() % 251;
		t += t0;
		if ((m0 >= 100) && (rand() % 101 < 75)) {
			m += m0;
		}
	}
	printf("Рыбак поймал: %d кг %d грамм \n", m / 1000, m % 1000);
	printf("Время: %d часов %d минут", t / 60, t % 60);
	return 0;
}