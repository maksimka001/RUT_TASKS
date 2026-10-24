#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Возводит число в квадрат, если оно неотрицательно, и в четвёртую степень, если отрицательно
 * @param x исходное число
 * @return Рассчитанное значение
 */
double processNumber(const double x);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Введите первое число: ");
    double a = getDouble();
    printf("Введите второе число: ");
    double b = getDouble();
    printf("Введите третбе число: ");
    double c = getDouble();
    printf("Первый результат: %lf\n", processNumber(a));
    printf("Второй результат: %lf\n", processNumber(b));
    printf("Третий результат: %lf\n", processNumber(c));
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

double processNumber(const double x)
{
    if (x >= 0)
    {
        return pow(x, 2);
    }
    else
    {
        return pow(x, 4);
    }
}
