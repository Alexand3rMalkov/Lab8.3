#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "rus");
	double i, a=0, z=0;
	//int a = 0;
	scanf("%lf", &i);
	for (; a < i; ++a); {
		z += (pow(-1, a)*(1/(pow(2, a))));
	}
	printf("%lf", z);
}