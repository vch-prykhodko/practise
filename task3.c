#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int p; 

    printf("Input number\n*This number must be less or equal 30*\nYour value: "); // Підказка для користувача, яка просить ввести число
    scanf("%d", &p); 

    while (p < 0 || p > 30) // Перевірка валідності числа. 
    {
        printf("!!! Invalid number !!!\n*This number must be less or equal 30*\nYour value: ");
        scanf("%d", &p);
    }
    
    int result; // Оголошення змінної, в яку буде записаний результат

    if (p < 3) // Умова для чисел, які меньше 3-го розряду (вони не можуть мати три однакових числа в ряд, бо всього їх один або два)
    {
        result = pow(2, p); // Обчислення результату при даній умові
    }

    if (p == 3) // Умова для чисел, які належать до третьго розряду (можливі варіанти лише два (999 та 555))
    {
        result = pow(2, p) - 2; // Обчислення результату при даній умові
    }

    if (p >= 4) // Умова для чисел, які більше третього розряду. Там можливі більше двох варіантів, тож використовується формула з методичних вказівок
    {
        result = pow(2, p) - (p - 2); // Обчислення результату при даній умові
    }
    
    

    printf("You can make %d numbers", result); 
    return 0;
}