#include <stdio.h>
#include <stdlib.h>
#define smile "smile!"

int main()
{
    printf("%s%s%s\n", smile, smile, smile);
    printf("%s%s\n", smile, smile);
    printf("%s", smile);
    return 0;
}

void one_three(){
    printf("one");
    two() ;
    printf("three");

}

void two(){
    printf("two");
}
