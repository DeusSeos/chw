#include <stdio.h>
#include <stdlib.h>

double harmonic_mean(double, double);

int main(void)
{
	double a, b;

	printf("Enter two numbers: ");
	while (scanf("%lf %lf", &a, &b) == 2)
	{
		printf("%f\n", harmonic_mean(a, b));

		printf("Enter two numbers: ");
	}

	return 0;
}

double harmonic_mean(double a, double b)
{
	return 2/ (1 / a + 1 / b);
}
