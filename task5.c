#include <stdio.h>

int countSequences(int n) {
    if (n == 1)
        return 2; // Для n = 1 можна утворити 2 послідовності: 0 та 1

    int a = 1; // Кількість послідовностей довжиною n-1, що закінчуються 0
    int b = 1; // Кількість послідовностей довжиною n-1, що закінчуються 1
    int count = 0; // Загальна кількість послідовностей довжиною n

    for (int i = 2; i <= n; i++) {
        int temp = a;
        a = a + b;
        b = temp;
        count = a + b;
    }

    return count;
}

int main() {
    int n;

    printf("Введіть довжину послідовності n (1 < n < 10000): ");
    scanf("%d", &n);

    int result = countSequences(n) % 12345;

    printf("Кількість шуканих послідовностей: %d\n", result);

    return 0;
}
