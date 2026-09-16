#include <stdio.h>
#include <math.h>

/*
* @brief рассчитывает общее сопротивление трех параллельных резисторов
* @param r1 - сопротивление первого резистора
* @param r2 - сопротивление второго резистора
* @param r3 - сопротивление третьего резистора
* @return рассчитанное общее сопротивление
*/
double GetTotalResistance(const double r1, const double r2, const double r3);

/*
* @brief точка входа в программу
* @return возвращает 0, если программа выполнена корректно
*/
int main()
{
    double r1 = 0.0;
    double r2 = 0.0;
    double r3 = 0.0;


    if (scanf("%lf %lf %lf", &r1, &r2, &r3) != 3 || r1 <= 0 || r2 <= 0 || r3 <= 0)
    {
        printf("Введите положительные значения");
        return 1;
    }
    printf("R1 = %lf Ом\n", r1);
	  printf("R2 = %lf Ом\n", r2);
	  printf("R3 = %lf Ом\n\n", r3);

    double r_total = GetTotalResistance(r1, r2, r3);
    printf("Общее сопротивление соединения R = %lf Ом\n", r_total);
    return 0;
}

double GetTotalResistance(const double r1, const double r2, const double r3)
{
    return (double)(1.0 / (1.0/r1 + 1.0/r2 + 1.0/r3));
}
