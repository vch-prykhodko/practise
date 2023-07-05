#include <stdio.h>

int main() {
    int t1, t2, t3;
    float speed1, speed2, speed3, total_speed, time;

    // Введення даних
    scanf("%d %d %d", &t1, &t2, &t3);

    // Обчислення швидкостей гостей
    speed1 = 1.0 / t1;
    speed2 = 1.0 / t2;
    speed3 = 1.0 / t3;

    // Обчислення загальної швидкості
    total_speed = speed1 + speed2 + speed3;

    // Обчислення часу
    time = 1.0 / total_speed;

    // Виведення результату з округленням до 2 знаків після коми
    printf("%.2f\n", time);

    return 0;
}