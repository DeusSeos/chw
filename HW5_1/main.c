#include <stdio.h>
#include <stdlib.h>

int main()
{
    int even_count = 0, even_sum = 0, odd_count = 0, odd_sum = 0;
	float even_average, odd_average;
	int input;

	printf("Enter integers || Enter 0 to stop program : ");
	while(scanf("%d", &input) == 1 && input != 0)
	{
		if (input % 2 == 0)
		{
			even_count++;
			even_sum += input;
		}
		else
		{
			odd_count++;
			odd_sum += input;
		}
	}

	even_average = even_sum / (float) even_count;
	odd_average = odd_sum / (float) odd_count;

	printf("Number of even integers: %d\n", even_count);
	printf("Average value of even integers: %.2f\n", even_average);
	printf("Number of odd integers: %d\n", odd_count);
	printf("Average value of odd integers: %.2f\n", odd_average);

	return 0;
}
