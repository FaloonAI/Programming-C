#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RU");
	srand((unsigned)time(NULL));

	int year;
	printf("Введите год: ");
	scanf("%d", &year);

	switch ((year % 10) / 2) {
	case 0: printf("Белый\n"); break;
	case 1: printf("Черный\n"); break;
	case 2: printf("Зеленый\n"); break;
	case 3: printf("Красный\n"); break;
	case 4: printf("Желтый\n");
	}
	switch ((year + 56) % 12) {
	case 0: printf("Крыса"); break;
	case 1: printf("Бык"); break;
	case 2: printf("Тигр"); break;
	case 3: printf("Кролик"); break;
	case 4: printf("Дракон"); break;
	case 5: printf("Змея"); break;
	case 6: printf("Лошадь"); break;
	case 7: printf("Овца"); break;
	case 8: printf("Обезьяна"); break;
	case 9: printf("Петух"); break;
	case 10: printf("Собака"); break;
	case 11: printf("Свинья"); break;
	}
	return 0;
}