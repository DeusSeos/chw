#include <stdio.h>
#include <stdlib.h>

void to_base_n(int number, int base);

int main(void) {
	int number, base;


	printf("Enter a number in base 10 and a base to convert to: ");
	while (scanf("%d %d", &number, &base) == 2)
	{
        putchar('\n');
		to_base_n(number, base);
		

		printf("Enter a number in base 10 and a base to convert to: ");
	}

	return 0;
}

void to_base_n(int number, int base)
{

	if (base < 2 || 10 < base)
	{
		printf("Error: base must be between 2 and 10.");
		return;
	}


	if (number== 0) return;


	if (number< 0)
	{
		putchar('-');
		number = abs(number
    );
	}

	to_base_n(number/ base, base);
	printf("%d", number % base);
	return;

}