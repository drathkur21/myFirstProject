#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int days;
    float pennies;
    double profits;

//Get days
    do
    {
         do
    {
    days = get_int("How many days in the month?\n\nDays:");
    }
    while(days > 31);
    }
    while(days < 28);

//Test days
    printf("%i\n", days);


//Get pennies
    do
    {
    pennies = get_float("How many pennies do you start with?\n\nPennies:");
    }
    while (pennies < 1);

//Define and Test Profits and Pennies
    profits = 0;
//    printf("%f is a lot of pennies!!\n\n", pennies);


//Calculation
    for(int i = 0.00; i < days; i++)
    {
        profits = profits + (pennies*pow(2.00, i));
    }
    profits = profits/100;
    printf("$%.2f\nStonks!\n", profits);
}
