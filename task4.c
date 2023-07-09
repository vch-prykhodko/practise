#include <stdio.h>

int main() {
    int n, count = 0;

    // Введення натурального числа n
    printf("Введіть натуральне число n (1 < n < 150): ");
    scanf("%d", &n);

    // Перевірка коректності введеного значення n
    if (n <= 1 || n >= 150) {
        printf("Невірне значення n. Будь ласка, введіть натуральне число від 2 до 149.\n");
        return 0;
    }

    // Обчислення кількості рівних дільників числа n
    for (int i = 1; i <= n; i++) {
        if (n % i == n / i)
            count++;
    }

    // Виведення результату
    printf("Кількість рівних дільників числа %d: %d\n", n, count);

    return 0;
}
