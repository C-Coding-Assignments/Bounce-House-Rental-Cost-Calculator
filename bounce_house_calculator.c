#include <stdio.h>

//macro definitions for fixed rates for bounce houses
#define HOUSE1_3HOURS 58
#define HOUSE2_3HOURS 85
#define HOUSE3_3HOURS 100
#define HOUSE4_3HOURS 180
#define HOUSE1_HOURLY 8
#define HOUSE2_HOURLY 12
#define HOUSE3_HOURLY 15
#define HOUSE4_HOURLY 20
#define HOUSE1_MAX 80
#define HOUSE2_MAX 120
#define HOUSE3_MAX 150
#define HOUSE4_MAX 250

int main()
{
    //variable declarations
    int bounceHouse, days, hours, charge, firstThreeHours, hourlyRate, maxCharge;

    //getting bounce house selections from the user
    printf("Please select from four bounce houses: 1, 2, 3, and 4\nEnter bounce house selection: ");
    scanf("%d", &bounceHouse);

    //conditional statement which checks if the user entered a valid bounce house
    if (bounceHouse < 1 || bounceHouse > 4)
        printf("Invalid selection. Select from 1 to 4.\n");

    //conditional statement which evaluates to true if the user entered a valid bounce house
    else
    {
        //getting user input for number of days and hours
        printf("Enter days: ");
        scanf("%d", &days);
        printf("Enter hours: ");
        scanf("%d", &hours);

        //conditional statement which checks if the user entered a valid number of days and hours
        if (days < 0 || hours < 0 || hours > 24)
            printf("Invalid hours.\n");

        //conditional statement which evaluates to true if the user entered a valid number of days and hours 
        else
        {
            //conditional statement which checks if the user selected bounce house 1
            if (bounceHouse == 1)
            {
                firstThreeHours = HOUSE1_3HOURS;
                hourlyRate = HOUSE1_HOURLY;
                maxCharge = HOUSE1_MAX;

            }

            //conditional statement which checks if the user selected bounce house 2
            else if (bounceHouse == 2)
            {
                firstThreeHours = HOUSE2_3HOURS;
                hourlyRate = HOUSE2_HOURLY;
                maxCharge = HOUSE2_MAX;
            }

            //conditional statement which checks if the user selected bounce house 3
            else if (bounceHouse == 3)
            {
                firstThreeHours = HOUSE3_3HOURS;
                hourlyRate = HOUSE3_HOURLY;
                maxCharge = HOUSE3_MAX;
            }

            //conditional statement which checks if the user selected bounce house 4
            else
            {
                firstThreeHours = HOUSE4_3HOURS;
                hourlyRate = HOUSE4_HOURLY;
                maxCharge = HOUSE4_MAX;
            }

            //calculating the charge based on the number of hours entered
            if (days == 0)
            {
                //conditional statement which checks if the user requested less than three house
                if (hours < 3)
                    charge = firstThreeHours;

                //conditional statement which evaluates to true if the user request three or more house    
                else
                {
                    charge = firstThreeHours + hourlyRate * (hours - 3);

                    //conditional statement which checks if the user's charge exceeds the maximum charge for the given bounce house
                    if (charge > maxCharge)
                        charge = maxCharge;
                }    
            }

            //conditional statement which checks if the user requested more than one day
            else
            {
                charge = hourlyRate * hours;

                //conditional statement which checks if the user's charge exceeds the maximum charge for the given bounce house on the last day of rental
                if (charge > maxCharge)
                    charge = maxCharge + maxCharge * days;

                //conditional statement which evaluates to true if the user's charge does not exceed the maximum charge for the given bounce house on the last day of rental
                else
                    charge += days * maxCharge;
            }

            printf("Charge($): %d", charge);
        }     
    }    
    return 0;
}
