#include <stdio.h>
#include <stdlib.h>

const int minutesPerHour = 60;


int main()

{
    int minutes;

    printf("Enter time in minutes: ");
    scanf("%d", &minutes);

    while (minutes > 0){
        printf("%d in hours and minutes is %d hour(s) and %d minutes.\n", minutes, minutes/minutesPerHour, minutes%minutesPerHour);
        printf("Enter time in minutes: ");
        scanf("%d", &minutes);
    }

    return 0;
}

