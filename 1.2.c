#include <stdio.h>
#include <math.h>


double mb(const double bytes);
/**
 * @brief переводит байты в мегабайты
 * @param bytes обьем информации в байтах
 * @return обьем информации в мегабайтах
 */

double gb(const double bytes);
/**
 * @brief переводит байты в мегабайты
 * @param bytes обьем информации в байтах
 * @return обьем информации в гигабайтах
 */

double getDouble();
/**
 * @brief Точка входа в программу
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
    return (bytes / pow(1024,2));
}

double gb(const double bytes)
{
    return (bytes / pow(1024,3));
}
//pow возводит число в степень

double getDouble()
{
    double value = 0.0;
    scanf("%lf", &value);
    return value;
}
// value - значение в байтах
// @return возвращает значение value уже в мегабайтах и гигабайтах
