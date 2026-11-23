#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

/**
 * @brief считывает с клавиатуры значение с плавающей точкой
 * @param message - сообщение-приглашение к вводу
 * @return считанное значение
 */
double getValue(const char* message);

/**
 * @brief проверяет, что шаг - положительное число
 * @param step - значение шага
 */
void checkStep(const double step);

/**
 * @brief проверяет, что начало отрезка не больше его конца
 * @param xbegin - начало отрезка
 * @param xend - конец отрезка
 */
void checkSegment(const double xbegin, const double xend);

/**
 * @brief проверяет, что точка входит в область определения функции
 * @param x - значение аргумента
 * @return true, если функция определена в точке, иначе false
 */
bool isOOF(const double x);

/**
 * @brief вычисляет значение функции y для заданного x
 * @param x - значение аргумента
 * @return рассчитанное значение функции
 */
double getY(const double x);

/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    double xbegin = getValue("Enter segment start: ");
    double xend = getValue("Enter segment end: ");
    double step = getValue("Enter step: ");
    checkStep(step);
    checkSegment(xbegin, xend);

    for (double x = xbegin; x < xend + step / 2; x += step)
    {
        if (isOOF(x))
        {
            printf("x = %lf, y = %lf\n", x, getY(x));
        }
        else
        {
            printf("x = %lf, y is not defined\n", x);
        }
    }

    return 0;
}

double getValue(const char* message)
{
    if (message != NULL)
    {
        printf("%s\n", message);
    }

    double value = 0.0;
    if (scanf("%lf", &value) != 1)
    {
        printf("Input error");
        exit(1);
    }

    return value;
}

void checkStep(const double step)
{
    if (step <= 0)
    {
        printf("Error, step have to be positive");
        exit(1);
    }
}

void checkSegment(const double xbegin, const double xend)
{
    if (xbegin > xend)
    {
        printf("Error, segment begin have to be "
               "less or equal segment end");
        exit(1);
    }
}

bool isOOF(const double x)
{
    return x >= 0;
}

double getY(const double x)
{
    return x + sqrt(x) + cbrt(x) - 2.5;
}
