#include <stdio.h>
#include <math.h>
/**
 * @brief вход в программу
 * @return Рассчитанное значение
 */
int main(void){
  
    double R1, R2, R3, R;
  
    printf("Введите R1: ");
    scanf("%lf", &R1);
    printf("%.2f\n",R1);

    printf("Введите R2: ");
    scanf("%lf", &R2);
    printf("%.2f\n",R2);

    printf("Введите R3: ");
    scanf("%lf", &R3);
    printf("%.2f\n",R3);

    R = R1 + R2 + R3;
    printf("Сопротивление резистора: %.2f Ohm\n", R);
    return 0;
}
