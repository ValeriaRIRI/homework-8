#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RUS");
	int N, i;
	double sum = 0.0;
	printf("Введите число N: ");
	scanf("%d", &N);
	for (i = N; i <= 2 * N; i++) {
		sum += (double)(i * i);
	}
	printf("Сумма выражения равна %.6lf", sum);
}