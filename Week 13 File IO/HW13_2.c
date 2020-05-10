#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
    int a, b;
    FILE *file1;
    FILE *file2;

    
    if ((file1 = fopen(argv[1], "r")) == NULL)
    {
        printf("Could not open file %s for output\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((file2 = fopen(argv[2], "r")) == NULL)
    {
        printf("Could not open file %s for output\n", argv[2]);
        exit(EXIT_FAILURE);
    }
    
    a = getc(file1);
    b = getc(file2);

    while(a != EOF && b != EOF){
        while(a != EOF && a != '\n'){
            putchar(a);
            a = getc(file1);
        }
        if (a != EOF){
            putchar('\n');
            a = getc(file1);
        }

        while(b != EOF && b != '\n'){
            putchar(b);
            b = getc(file2);
        }
        if (b != EOF){
            putchar('\n');
            b = getc(file2);
        }
    }

    if (fclose(file1) != 0){
        printf("Couldn't close file: %s", argv[1]);
    }
    if (fclose(file2) != 0){
        printf("Couldn't close file: %s", argv[2]);
    }

    return 0;

}