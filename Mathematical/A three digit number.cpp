#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RU");
	srand((unsigned)time(NULL));

	int n;

	scanf("%d", &n);

	int i = n / 100;
	int j = (n / 10) % 10;
	int k = (n / 1);

	switch (i) {
	case 1: printf("Сто"); break;
	case 2: printf("Двести"); break;
	case 3: printf("Триста"); break;
	case 4: printf("Четыриста"); break;
	case 5: printf("Пятьсот"); break;
	case 6: printf("Шестьсот"); break;
	case 7: printf("Семьсот"); break;
	case 8: printf("Восемьсот"); break;
	case 9: printf("Девятьсот");
	}
	switch (j) {
	case 9: printf("Девяносто"); break;
	case 8: printf("Восемьдесят"); break;
	case 7: printf("Семьдесят"); break;
	case 6: printf("Шестьдесят"); break;
	case 5: printf("Пятидесят"); break;
	case 4: printf("Сорок"); break;
	case 3: printf("Тридцать"); break;
	case 2: printf("Двадцать"); break;
	case 1: printf("Десять");
	}
	switch (k) {
	case 9: printf("Девять"); break;
	case 8: printf("Восемь"); break;
	case 7: printf("Семь"); break;
	case 6: printf("Шесть"); break;
	case 5: printf("Пять"); break;
	case 4: printf("Четыре"); break;
	case 3: printf("Три"); break;
	case 2: printf("Два"); break;
	case 1: printf("Один"); break;
	case 0: printf("Ноль");
	}
	return 0;
}