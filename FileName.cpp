#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RU");
	srand((unsigned)time(NULL));

	int year;
	printf("������� ���: ");
	scanf("%d", &year);

	switch ((year % 10) / 2) {
	case 0: printf("�����\n"); break;
	case 1: printf("������\n"); break;
	case 2: printf("�������\n"); break;
	case 3: printf("�������\n"); break;
	case 4: printf("������\n");
	}
	switch ((year + 56) % 12) {
	case 0: printf("�����"); break;
	case 1: printf("���"); break;
	case 2: printf("����"); break;
	case 3: printf("������"); break;
	case 4: printf("������"); break;
	case 5: printf("����"); break;
	case 6: printf("������"); break;
	case 7: printf("����"); break;
	case 8: printf("��������"); break;
	case 9: printf("�����"); break;
	case 10: printf("������"); break;
	case 11: printf("������"); break;
	}
	return 0;
}