#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(int argc, char *argv[])

{

    
    FILE *filePtr;
    char aLine[255];

    if (argc != 3){
        fprintf(stderr, "Usage: ")
        exit(EXIT_FAILURE);
    }
     if ((filePtr = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "Can't open file %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }
    if (fgets(aLine, 255, filePtr) != NULL){
        if (strstr(aLine, argv[1]) != NULL){
            fputs(aLine, stdout);
            
        }


    }

    fclose(filePtr);

    return 0;
}   