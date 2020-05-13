#include <stdio.h>
#include <stdlib.h>

int main()
{
    int upper_bound, lower_bound, input;


    printf("Enter upper and lower bounds: ");

    while(input = scanf("%d%d", &lower_bound, &upper_bound), input == 2 && lower_bound < upper_bound)
	{
		printf("The sums of the squares from %d to %d is %d\n", lower_bound * lower_bound, upper_bound * upper_bound, sum_of_squares(lower_bound, upper_bound));
		printf("Enter upper and lower bounds: ");
	}

	printf("Exiting program.");

    return 0;
}


int sum_of_squares(int lower, int upper)
{
	int sum = 0;

	for (int i = lower; i <= upper; i++)
	{
		sum += i * i;
	}

	return sum;
}
