#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;

    // Введення координат точок
    printf("Введіть координати точки початку вектора (x1, y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Введіть координати точки кінця вектора (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    // Обчислення різниці координат
    int diffX = x2 - x1;
    int diffY = y2 - y1;

    // Обчислення квадратів різниць координат
    int diffXSquared = diffX * diffX;
    int diffYSquared = diffY * diffY;

    // Обчислення суми квадратів різниць координат
    int sumSquared = diffXSquared + diffYSquared;

    // Обчислення довжини вектора
    double length = sqrt(sumSquared);

    // Виведення результату з точністю до шести знаків після коми
    printf("Довжина вектора: %.6f\n", length);

    return 0;
}
