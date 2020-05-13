#include <stdio.h>
#include <stdlib.h>

#define BASIC_RATE 10.0
#define OVERTIME_HOURS 40.0
#define OVERTIME_PAY_RATE 1.5
#define TAX_RATE_1 0.15
#define TAX_BRACKET_1 300.0
#define TAX_RATE_2 0.20
#define TAX_BRACKET_2 450.0
#define TAX_RATE_3 0.25

float calc_pay(float hours);
float calc_tax(float gross_pay);


int main()
{
    float hours, gross_pay, taxes;

    printf("Enter the hour worked: ");
    scanf("%f", &hours);
    gross_pay = calc_pay(hours);
    taxes = calc_tax(gross_pay);
    printf("Gross pay: $%.2f for %.2f hours of work. Taxes: $%.2f \n", gross_pay, hours, taxes);


    return 0;
}

//An employee works 50 hours in a week.
//Her normal pay rate is $15 an hour.
//So she is paid $600 for her 40 hours at $15 an hour, plus $225 for her additional 10 hours of overtime (at $15 x 1.5 x 10 = $225).
//Her total pay for the week would be $825.


float calc_pay(float hours){
    if (hours > OVERTIME_HOURS){
        return OVERTIME_HOURS * BASIC_RATE + (hours - OVERTIME_HOURS) * BASIC_RATE * OVERTIME_PAY_RATE;
    }
    else {
        return hours* BASIC_RATE;

    }
}

float calc_tax(float gross_pay){
    if (gross_pay > TAX_BRACKET_2)
        return TAX_RATE_3 * (gross_pay - TAX_BRACKET_2) + TAX_RATE_2 * (TAX_BRACKET_2 - TAX_BRACKET_1) + TAX_RATE_1 * TAX_BRACKET_1;

	else if (gross_pay > TAX_BRACKET_1)
		return TAX_RATE_2 * (gross_pay - TAX_BRACKET_1) + TAX_RATE_1 * TAX_BRACKET_1;

	else
		return TAX_RATE_1 * gross_pay;
}


