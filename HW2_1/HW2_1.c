#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50];
    printf("Enter your name: ");
    scanf("%s", &a);
    printf("\"%s\"\n", a);
    printf("\"%20s\"\n", a);
    printf("   %s   \n", a);
    printf("");
    return 0;
}
