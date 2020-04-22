#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("starting now:\n");
    one_three();
    printf("done!\n");
    return 0;
}





void two(void){
    printf("two\n");
    return;
}

void one_three(void){
    printf("one\n");
    two();
    printf("three\n");
    return;

}
