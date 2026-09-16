#include <stdio.h>
#include <math.h>
#include <windows.h>

/*
* @brief рассчитывает объем шара
* @param r - радиус шара
* @return рассчитаннвй объем
*/
double GetVolume(const double r);

/*
* @brief рассчитывает площаль поверхности шара
* @param r - радиус шара
* @return рассчитанная площажь
*/

double GetSurfaceArea(const double r);

/*
* @brief точка входа в программу
* @return возвращает 0, если программа выполнена корректно
*/
int main()
{
    double rad = 0.0;
    printf("Введите радиус:");

    if (scanf("%lf", &rad) != 1 || rad < 0)
    {
        printf("Введите положительное число");
        return 1;
    }
    printf("Объем шара V = %lf\n", GetVolume(rad));
	printf("Площадь поверхности S = %lf\n", GetSurfaceArea(rad));

	return 0;
}

double GetVolume(const double r)
{
    return (double)((4.0/3.0) * M_PI * pow(r, 3));
}

double GetSurfaceArea(const double r)
{
    return (double)(4.0 * M_PI * pow(r, 2));
}
