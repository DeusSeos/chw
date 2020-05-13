#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 0; i < 7; i++)
    {
        for (char c = 'F'; 'F' - c < i; c--)
        {
            printf("%c", c);
        }
        printf("\n");
    }
}
