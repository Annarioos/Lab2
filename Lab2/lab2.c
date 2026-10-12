#include <stdio.h>
#include <locale.h>
int n1()
{
	printf("%d\n%2d\n%3d\n%4d\n", 1, 2, 3, 4);
	printf("%10.5f\n ", 12.234657);
	printf("Остаток от деления %d на %d равен %d\n ", 7, 5, 7 % 5);
	printf("Умножение %d на %d равно %d\n ", 2000, 4, 2000 * 4);
	printf("%g разделить %e равно %f\n ", 5., 2000000., 5. / 2000000);
	return 0;
}
int n2()
{
	int N = 14;
	int K = 55;
	printf("Сейчас %d часов %d минут 00 секунд\n ", N, K);
	printf("Сейчас идет %d минута суток\n ", N * 60 + K);
	printf("До полуночи осталось %d часов и %d минут\n ", 23 - N, 60 - K);
	printf("С 8:00 прошло %d секунд\n ", ((N - 8) * 60 + K) * 60);
	printf("Текущий час = %2.2f суток  и текущая минута = %2.2f часа\n ", N / 24., K / 60.);
	return 0;
}
int n3()
{
	int L = 393;
	int n = 4;
	int k = 2;
	int m = 6;
	printf("Вариант 9 Дано: \n ");
	printf("\t%d\n ", n);
	printf("\t%d\n ", L);
	printf("-----------\n ");
	printf("%0*.*f\n ", m + k + 1, m, n / 393.);
	return 0;
}
int probel()
{
	printf("       \n ");
	return 0;
}
int main()
{
	setlocale(LC_CTYPE, ".UTF8");
	n1();
	probel();
	probel();
	n2();
	probel();
	probel();
	n3();
	return 0;
}
