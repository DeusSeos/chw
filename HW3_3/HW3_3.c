#include <stdio.h>
#include <stdlib.h>

void Temperatures(double f);

int main()
{
    double f;
    printf("Enter a Fahrenheit temperature. (Enter q to quit): ");
    while (scanf("%lf", &f) == 1) // continue executing loop if user enters valid number
	{
		Temperatures(f);

		printf("Enter a Fahrenheit temperature. (Enter q to quit): ");
	}

}


void Temperatures(double f)
{
    double celsius = (f - 32.0 ) * (5.0/9.0);
    double kelvin = celsius + 273.16;

    printf("%.2f degrees Fahrenheit is %.2f degrees Celsius and %.2f degrees Kelvin.\n", f, celsius, kelvin);
}
