#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_CTYPE, ".UTF8");
	float s = 390.0f;
	float rr_l = 15.0f;
	float fe_l = 36.0f;
	float x;
	printf("Введите стоимость 1 галлона бензина: ");
	scanf_s("%f", &x);

	float rr_cost = (s / rr_l) * x;
	float fe_cost = (s / fe_l) * x;

	printf("Стоимость поездки на Rolls-Royce: %.2f\n", rr_cost);
	printf("Стоимость поездки на Ford Escort:  %.2f\n", fe_cost);
	printf("Денег сбережет, если поедет на машине Ford Escort:  %.2f\n", rr_cost - fe_cost);
	return 0;
}