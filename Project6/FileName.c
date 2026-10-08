#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
void main() {
	setlocale(LC_ALL, "RUS");
	double x, y, x1, y1, y2, x2;
	puts("Введите абциссу точки: ");
	scanf("%lf", &x);
	puts("Введите ординату точки: ");
	scanf("%lf", &y);
	y1 = -2 * x - 6;
	y2 = -x + 6;
	x1 = (y - 4) / -2;
	x2 = 6 - y;
	if (y >= 0 && y >= y1 && y <= y2) {
		if (x >= 0 && x >= x1 && x <= x2)
			printf("Точка (%.1lf;%.1lf) лежит в заданном рисунке", x, y);
		else
			printf("Точка (%.1lf;%.1lf) не лежит в заданном рисунке", x, y);
	}
	else
		printf("Точка (%.1lf;%.1lf) не лежит в заданном рисунке", x, y);
		
}