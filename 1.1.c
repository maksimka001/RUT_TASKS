#include <stdio.h>
#include <math.h>

/*
* @brief рассчитывает функцию A по заданной формуле
* @param x - значение параметра x
* @param y - значение параметра y
* @return рассчитанное значение
*/
double GetA(const double x, const double y);

/*
* @brief рассчитывает функцию B по заданной формуле
* @param x - значение параметра x
* @param y - значение параметра y
* @return рассчитанное значение
*/
double GetB(const double x, const double y);

/*
* @brief точка входа в программу
* @return возвращает 0, если программа выполнена корректно
*/
int main()
{
	const double X = 0.335;
	const double Y = 0.025;
	printf("a = %lf\n", GetA(X, Y));
	printf("b = %lf\n", GetB(X, Y));
	return 0;
}

double GetA(const double x, const double y)
{
	return (double)(1 + x + (pow(x, 2)/2) + (pow(x, 3)/3) + (pow(x, 4)/4));
}

double GetB(const double x, const double y)
{
	return (double)(x * (sin(pow(x, 3)) + pow(cos(y), 2)));
}
