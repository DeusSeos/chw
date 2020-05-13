#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int character;
    int total_upper = 0,
    total_lower = 0,
    total_other = 0;

    while((character = getchar()) != EOF)
    {
        if (isupper(character))
            total_upper++;
        else if (islower(character))
            total_lower++;
        else
            total_other++;

    }

    printf("Uppercase Total: %d\n", total_upper);
    printf("Lowercase Total: %d\n", total_lower);
    printf("Other Total: %d\n", total_other);



    return 0;
}
