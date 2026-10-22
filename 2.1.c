#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief Вычисляет объём шара с заданным радиусом
 * @param r радиус шара
 * @return Рассчитанное значение объёма
 */
double v(const double r);

/**
 * @brief Вычисляет площадь поверхности шара с заданным радиусом
 * @param r радиус шара
 * @return Рассчитанное значение площади поверхности
 */
double s(const double r);

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Проверяет, что радиус - положительное число
 * @param r - считанное значение радиуса шара
 */
void checkRadius(const double r);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Enter radius: ");
    double r = getDouble();
    checkRadius(r);

    printf("Volume is %lf\n", v(r));
    printf("Surface area is %lf\n", s(r));

    return 0;
}

double v(const double r)
{
    return 4.0 / 3.0 * M_PI * pow(r, 3);
}

double s(const double r)
{
    return 4.0 * M_PI * pow(r, 2);
}

double getDouble()
{
    double r = 0.0;
    if (scanf("%lf", &r) != 1)
    {
        printf("Error");
        exit(1);
    }
    return r;
}

void checkRadius(const double r)
{
    if (r <= 0)
    {
        printf("Error");
        exit(1);
    }
}
