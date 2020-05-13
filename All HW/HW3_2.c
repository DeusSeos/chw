#include <stdio.h>
#include <stdlib.h>

const float cent_per_inch = 2.54;

const int inch_per_feet = 12;

int main()
{

    float height_cent, height_inch, inches;
    int feet;

    printf("Enter a height in centimeters: ");
    scanf("%f", &height_cent);

    while (height_cent > 0)
    {
        height_inch = height_cent / cent_per_inch;
        feet = (int) height_inch / inch_per_feet;
        inches = height_inch - feet * inch_per_feet;

        printf("%.1f cm = %d feet, %.1f inches\n", height_cent, feet, inches);

        printf("Enter a height in centimeters (<= 0 to quit): ");
        scanf("%f", &height_cent);
    }


    return 0;
}
