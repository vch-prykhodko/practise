#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, r1, x2, y2, r2;
    double distance, sumRadii, diffRadii;

    // Введення координат та радіусів кола
    printf("Введіть координати центру першого кола (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Введіть радіус першого кола (r1): ");
    scanf("%lf", &r1);

    printf("Введіть координати центру другого кола (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    printf("Введіть радіус другого кола (r2): ");
    scanf("%lf", &r2);

    // Обчислення відстані між центрами кола
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Обчислення суми та різниці радіусів
    sumRadii = r1 + r2;
    diffRadii = fabs(r1 - r2);

    // Перевірка умов перетину кола
    if (distance == 0 && r1 == r2) {
        // Кола збігаються, маємо безліч точок перетину
        printf("Кількість точок перетину: -1\n");
    }
    else if (distance <= sumRadii && distance >= diffRadii) {
        // Кола перетинаються в двох точках
        printf("Кількість точок перетину: 2\n");
    }
    else if (distance < diffRadii || distance > sumRadii) {
        // Кола не перетинаються
        printf("Кількість точок перетину: 0\n");
    }
    else {
        // Кола торкаються одне одного у єдиній точці
        printf("Кількість точок перетину: 1\n");
    }

    return 0;
}
