#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RU");
	int day;
	printf("Введите дату: ");
	scanf("%d", &day);
	day = day % 7;
	switch (day) {
		case 1 : printf("Понедельник"); break;
		case 2 : printf("Вторник"); break;
		case 3 : printf("Среда"); break;
		case 4 : printf("Четверг"); break;
		case 5 : printf("Пятница"); break;
		case 6 : printf("Суббота"); break;
		default : printf("Воскресенье"); break;
	}
	return 0;
}