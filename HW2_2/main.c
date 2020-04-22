#include <stdio.h>
#include <stdlib.h>

int main()
{
    float input;
    printf("Enter a floating point number: ");
    scanf("%f", &input);

    printf("%f\n", input);
    printf("The input is %.2f or %.1e\n", input, input);
    printf("The input is %+.3f or %.2E\n", input, input);
    return 0;
}
