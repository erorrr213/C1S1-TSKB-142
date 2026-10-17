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

//pow возводит число в степень
double gb(const double bytes)
{
    return (bytes / pow(1024,3));
}

// value - значение в байтах
// @return возвращает значение value уже в мегабайтах и гигабайтах

double getDouble()
{
    double value = 0.0;
    scanf("%lf", &value);
    return value;
}

