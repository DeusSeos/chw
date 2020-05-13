#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



struct month{
    char name [10];
    char abr [3];
    int monthNum;
    int days;
};

struct  month months[12] = {
    {"January", "Jan", 31, 1},
    {"February", "Feb", 28, 2},
    {"March", "Mar", 31, 3},
    {"April", "Apr", 30, 4},
    {"May", "May", 31, 5},
    {"June", "Jun", 30, 6},
    {"July", "Jul", 31, 7},
    {"August", "Aug", 31, 8},
    {"September", "Sep", 30, 9},
    {"October", "Oct", 31, 10},
    {"November", "Nov", 30, 11},
    {"December", "Dec", 31, 12}
};

struct month monthsLeap[12] = {
    {"January", "Jan", 31, 1},  
    {"February", "Feb", 29, 2},
    {"March", "Mar", 31, 3},
    {"April", "Apr", 30, 4},
    {"May", "May", 31, 5},
    {"June", "Jun", 30, 6},
    {"July", "Jul", 31, 7},
    {"August", "Aug", 31, 8},
    {"September", "Sep", 30, 9},
    {"October", "Oct", 31, 10},
    {"November", "Nov", 30, 11},
    {"December", "Dec", 31, 12}
};


int dayCalc(int d, char *m, int y);
int dayLeapCalc(int d, char *m, int y);


int main(){
    int day;
    char month[25] = {0};
    int year;
    int dayTotal = 0;

    printf("Enter the day: ");
    while((scanf("%d", &day) == 1)){
        printf("Enter the month: ");
        scanf("%s", month);
        printf("Enter the year: ");
        scanf("%d", &year);
        if (year % 4 == 0 && year %400 != 0){
             dayTotal = dayCalc(day, month, year);
        } else {
            dayTotal = dayLeapCalc(day, month, year);
        }
        if (dayTotal > 0)
            printf("There are %d days through %s %d in year %d.\n", dayTotal, month, day, year);
        else
            printf("%s is not valid input.\n", month);
        printf("Please enter the day (q to quit): ");
    }
    
    return 0;
}

int dayCalc(int d, char *m, int y){
    int total = 0;
    int monNum= 0;
    int i;
     if (isalpha(*m))
    {
    m[0] = toupper(m[0]);
        for (i = 0; m[i] != '\0'; i++){
            m[i] = toupper(m[i]);
        }
    }
    for(i = 0; i< 12; i++)
        if (strcmp(m, months[i].name) == 0 || (strcmp(m, months[i].abr) == 0) || (atoi(m) == months[i].monthNum)){
            monNum = months[i].monthNum;
            break;
        }
    
    if (monNum == 0){
        total = -1;
    }
    else 
        for (i = 0; i < monNum - 1; i++ ){
            total += months[i].days;
        }
    total += d;

    return total;
}

int dayLeapCalc(int d, char *m, int y){
    int total = 0;
    int monNum= 0;
    int i;
     if (isalpha(*m))
    {
    m[0] = toupper(m[0]);
        for (i = 0; m[i] != '\0'; i++){
            m[i] = toupper(m[i]);
        }
    }
    for(i =0 ; i< 12; i++)
        if (strcmp(m, monthsLeap[i].name) == 0 || (strcmp(m, monthsLeap[i].abr) == 0) || (atoi(m) == monthsLeap[i].monthNum)){
            monNum = monthsLeap[i].monthNum;
            break;
        }
    
    if (monNum == 0){
        total = -1;
    }
    else 
        for (i = 0; i < monNum - 1; i++ ){
            total += monthsLeap[i].days;
        }
    total += d;

    return total;
}