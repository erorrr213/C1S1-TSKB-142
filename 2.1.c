
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief Вычисляет объем параллелепипеда
 * @param length длина параллелепипеда
 * @param width ширина параллелепипеда
 * @param height высота параллелепипеда
 * @return Рассчитанное значение
 */
double v(const double length, const double width, const double height);

/**
 * @brief Вычисляет площадь поверхности параллелепипеда
 * @param length длина параллелепипеда
 * @param width ширина параллелепипеда
 * @param height высота параллелепипеда
 * @return Рассчитанное значение
 */
double s(const double length, const double width, const double height);

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Проверяет, что значение является положительным числом
 * @param value считанное значение
 */
void checkValue(const double value);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Enter length: ");
    double length = getDouble();
    checkValue(length);

    printf("Enter width: ");
    double width = getDouble();
    checkValue(width);

    printf("Enter height: ");
    double height = getDouble();
    checkValue(height);

    printf("Volume is %lf\n", v(length, width, height));

    printf("Surface area is %lf\n", s(length, width, height));

    return 0;
}

double v(const double length, const double width, const double height)
{
    return length * width * height;
}

double s(const double length, const double width, const double height)
{
    return 2 * (length * width +
                 length * height +
                 width * height);
}

double getDouble()
{
    double value = 0.0;

    if (scanf("%lf", &value) != 1)
    {
        printf("Error");
        exit(1);
    }

    return value;
}

void checkValue(const double value)
{
    if (value <= 0)
    {
        printf("Error");
        exit(1);
    }
}
