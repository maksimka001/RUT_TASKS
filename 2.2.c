
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double getDouble();

/**
 * @brief Вычисляет значение функции y для заданного x
 * @param x значение аргумента
 * @return Рассчитанное значение функции
 */
double y(const double x);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Введите x: ");
    double x = getDouble();
    printf("y = %lf\n", y(x));
    return 0;
}

double getDouble()
{
    double value = 0.0;
    if (scanf("%lf", &value) != 1)
    {
        printf("Ошибка");
        exit(1);
    }
    return value;
}

double y(const double x)
{
    const double a = 2.5;

    if (x > a)
    {
        return x * cbrt(x - a);
    }
    else
    {
        return x * sin(a) * x;
    }
}
