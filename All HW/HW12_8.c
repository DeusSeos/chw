#include <stdio.h>

int *make_array(int elem, int val);
void show_array(const int ar[], int n);



int main(void)
{
	int * pa;
	int size;
	int value;

	printf("Enter the number of elements: ");
	while (scanf("%d", &size) == 1 && size > 0)
	{
		printf("Enter the initialization value: ");
		scanf("%d", &value);

		pa = make_array(size, value);
		if (pa)
		{
			show_array(pa, size);
			free(pa);
		}
		printf("Enter the number of elements (0 to quit): ");
	}
	
	return 0;
}


int * make_array(int elem, int val)
{

	int *array = (int *) malloc(elem * sizeof(int));

	if (array != NULL)
		for (int i = 0; i < elem; i++)
			array[i] = val;

	return array;
}

void show_array(const int ar[], int n)
{
	// print contents of an array of ints, 8 elements to a line
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", ar[i]);
	
	}
	if (i % 8 != 0)
		putchar('\n');
}    