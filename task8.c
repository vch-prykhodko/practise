#include <stdio.h>
#include <string.h>

// Рекурсивна функція для генерації анаграм
int generateAnagrams(char word[], int length) {
    // Базовий випадок: якщо довжина слова 1, можна утворити 1 анаграму
    if (length == 1) {
        return 1;
    }

    // Змінна для збереження кількості анаграм
    int count = 0;

    // Генерація анаграм зі слова
    for (int i = 0; i < length; i++) {
        // Обмін поточної літери з першою
        char temp = word[i];
        word[i] = word[0];
        word[0] = temp;

        // Генерація анаграм для підслова, що починається з другої літери
        count += generateAnagrams(word + 1, length - 1);

        // Обмін літери назад для збереження порядку
        temp = word[0];
        word[0] = word[i];
        word[i] = temp;
    }

    return count;
}

int main() {
    char word[15];

    // Введення слова
    printf("Введіть слово: ");
    scanf("%s", word);

    int length = strlen(word);

    // Перевірка на максимальну довжину слова
    if (length > 14) {
        printf("Довжина слова перевищує 14.\n");
        return 0;
    }

    // Виклик функції для генерації анаграм та отримання кількості
    int count = generateAnagrams(word, length);

    // Виведення кількості анаграм
    printf("Кількість анаграм: %d\n", count);

    return 0;
}
