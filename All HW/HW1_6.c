#include <stdio.h>
#include <stdlib.h>

int main()
{

    float quarts;
    float mole_mass = 3.0e-23;
    float grams_quart = 950.0;
    printf("Enter the amount of water in quarts: ");
    scanf("%f", &quarts);
    printf("The number of molecules of water in %f quarts is %f", quarts, quarts* grams_quart / mole_mass);

    return 0;


}
