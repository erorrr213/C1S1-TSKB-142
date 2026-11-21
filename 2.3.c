
#include <stdio.h>

/**
 * @brief Выводит пожелание в зависимости от времени суток
 * @param hour Час суток
 */
void printGreeting(const int hour);

/**
 * @brief Основная функция программы
 * @return 0 при успешном завершении
 */
int main(void) {
    int hour = 0;

    // Ввод времени суток
    printf("Введите час суток (0-23): ");
    scanf("%d", &hour);

    // Проверка корректности времени
    if (hour < 0 || hour > 23) {
        printf("Ошибка! Введите время от 0 до 23.\n");
    } else {
        printGreeting(hour);
    }

    return 0;
}

/**
 * @brief Реализация функции вывода пожелания
 * @param hour Час суток
 */
void printGreeting(int hour) {
    if (hour >= 6 && hour < 12) {
        printf("Доброе утро!\n");
    } else if (hour >= 12 && hour < 18) {
        printf("Добрый день!\n");
    } else if (hour >= 18 && hour < 22) {
        printf("Добрый вечер!\n");
    } else {
        printf("Спокойной ночи!\n");
    }
}
