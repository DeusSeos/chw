#include <stdio.h>
#include <stdlib.h>
#define smile "smile!"


void two(){
    printf("two");
}
void one_three(){
    printf("one");
    two() ;
    printf("three");

}
int main()
{
    int x = 3;
    x++;
    x+= 4;
    printf("%s%s%s\n", smile, smile, smile);
    printf("%s%s\n", smile, smile);
    printf("%s", smile);
    return 0;
}


