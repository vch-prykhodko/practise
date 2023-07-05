#include <stdio.h>

// Функція для обчислення НСД (найбільший спільний дільник)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Функція для обчислення НСК (найменше спільне кратне)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n, i;
    int numbers[20];
    int result;

    // Введення даних
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Обчислення НСК за допомогою ітеративного підходу
    result = numbers[0];
    for (i = 1; i < n; i++) {
        result = lcm(result, numbers[i]);
    }

    // Виведення результату
    printf("%d\n", result);

    return 0;
}