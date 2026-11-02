#include <stdio.h>

/**
 * @brief Ввод сопротивления резистора
 * @return Введенное значение сопротивления
 */
double getResistance(int number) {
    double resistance = 0.0;

    printf("Введите R%d: ", number);
    scanf("%lf", &resistance);

    return resistance;
}

/**
 * @brief Расчет общего сопротивления
 * @param R1 Сопротивление первого резистора
 * @param R2 Сопротивление второго резистора
 * @param R3 Сопротивление третьего резистора
 * @return Общее сопротивление
 */
double calculateResistance(double R1, double R2, double R3) {
    double R = 0.0;

    R = R1 + R2 + R3;

    return R;
}

/**
 * @brief Основная функция программы
 * @return 0 при успешном завершении
 */
int main(void) {
    double R1 = 0.0;
    double R2 = 0.0;
    double R3 = 0.0;
    double R = 0.0;

    // Ввод сопротивлений
    R1 = getResistance(1);
    R2 = getResistance(2);
    R3 = getResistance(3);

    // Расчет общего сопротивления
    R = calculateResistance(R1, R2, R3);

    // Вывод результата
    printf("Общее сопротивление: %.2f Ohm\n", R);

    return 0;
}
