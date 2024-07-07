#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "rus");

    int a, b;
    scanf_s("%d, %d", &a, &b);
    if (a <= 21) { b--; }
    switch (b) {
    case 1: printf("Водолей"); break;
    case 2: printf("Рыбы"); break;
    case 3: printf("Овен"); break;
    case 4: printf("Телец"); break;
    case 5: printf("Близнецы"); break;
    case 6: printf("Рак"); break;
    case 7: printf("Лев"); break;
    case 8: printf("Дева"); break;
    case 9: printf("Весы"); break;
    case 10: printf("Скорпион"); break;
    case 11: printf("Стрелец"); break;
    default: printf("Козерог");
    }
    return 0;
}