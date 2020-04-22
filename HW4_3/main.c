#include <stdio.h>
#include <stdlib.h>

int main()
{

    int index = 0;

    char input[255];
    printf("Enter a string to be reverisfied: ");
    while (scanf("%c", &input[index]), input[index] != '\n'){
        index++;
    }
    for (; index >= 0; index--){
        printf("%c", input[index]);
    }

    printf("\n");
    return 0;
}
