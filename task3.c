#include <stdio.h>

long long countNumbers(int p) {
    long long withoutTriples[p + 1];
    long long withTriples[p + 1];

    withoutTriples[1] = 2; // Кількість чисел із 1 розрядом без тріплетів (5 та 9)
    withTriples[1] = 0; // Кількість чисел із 1 розрядом з тріплетом (неможливо утворити)

    for (int i = 2; i <= p; i++) {
        withoutTriples[i] = withoutTriples[i - 1] + withTriples[i - 1];
        withTriples[i] = withoutTriples[i - 1];
    }

    return withoutTriples[p] + withTriples[p];
}

int main() {
    int p;

    printf("Введіть кількість розрядів (p ≤ 30): ");
    scanf("%d", &p);

    long long result = countNumbers(p);

    printf("Кількість чисел із %d розрядами: %lld\n", p, result);

    return 0;
}