#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
float homework(float x);
int main()
{
    setlocale(LC_CTYPE, ".UTF8");
    float x;
    float s_s_money;
    printf("Введите стоимость 1 галлона бензина: ");
    scanf("%f", &x);

    s_s_money = homework(x);
    return 0;
}
float homework(float x)
{
    float s = 390.0f;
    float rr_l = 15.0f;
    float fe_l = 36.0f;

    float rr_cost = (s / rr_l) * x;
    float fe_cost = (s / fe_l) * x;
    float s_money = rr_cost - fe_cost;

    printf("Стоимость поездки на Rolls-Royce: %.2f\n", rr_cost);
    printf("Стоимость поездки на Ford Escort: %.2f\n", fe_cost);
    printf("Денег сбережет, если поедет на машине Ford Escort: %.2f\n", s_money);
    return s_money;
}
