#include <stdio.h>
#include <math.h>

/**
 * @brief переводит байты в мегабайты
 * @param bytes обьем информации в байтах
 * @return обьем информации в мегабайтах
 */
double mb(const double bytes);

/**
 * @brief переводит байты в мегабайты
 * @param bytes обьем информации в байтах
 * @return обьем информации в гигабайтах
 */
double gb(const double bytes);

/**
 * @brief считывает значение с плавающей точкой
 * @return 0, если программа выполнена корректно, иначе не 0
 */
double getDouble();

/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    
    double bytes = getDouble();
    printf("Megabytes: %.2f\n", mb(bytes));
    printf("Gigabytes: %.2f\n", gb(bytes));
    return 0;
}

double mb(const double bytes)
{
    return (bytes / 1048576);
}

//pow возводит число в степень
double gb(const double bytes)
{
    return (bytes / 1073741824);
}



double getDouble()
{
    double value = 0.0;
    scanf("%lf", &value);
    return value;
}
