#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
/*
 * Simple lunar lander program.
 * By:  <insert name here>
 */


double altitude = 100;  /* Meters */
double velocity = 0;    /* Meters per second */
double fuel = 100;      /* Kilograms */
double power = 1.5;     /* Acceleration per pound of fuel */
double g = -1.63;       /* Moon gravity in m/s^2 */
double burn;            /* Amount of fuel to burn */
double altitude;
double velocity;
double burn;
int time;

int main()
{
    printf("Lunar Lander - (c) 2012, by <insert name here>\n");


    printf("Altitude: %.2f\n", altitude);
    printf("Velocity: %.2f\n", velocity);
    printf("You have %.1f kilograms of fuel\n", fuel);

    while (altitude > 0)
    {
        burn = burnFuel();
        time++;
        velocity = velocity + g + power * burn;
        altitude += velocity;
        fuel -= burn;

        printf("Altitude: %.2f\n", altitude);
        printf("Velocity: %.2f\n", velocity);
        printf("You have %.1f kilograms of fuel\n", fuel);
        if (fabs(velocity) > 3)
        {
            printf("Your next of kin have been notified\n");
            altitude = -1;
        }
    }
    printf("You landed with a velocity of %.2f\n", velocity);
    printf("You landed time %d\n", time);





}


int burnFuel()
{
    int burnBool = 0;

    while (burnBool == 0)
    {
        printf("How much fuel would you like to burn: ");
        scanf_s("%lf", &burn);
        
        if (burn < 0)
        {
            printf("You can't burn negative fuel\n");
            burnBool = 0;
        }
        else if (burn > 5)
        {
            printf("You can't burn more than 5 kilograms per second\n");
            burnBool = 0;
        }
        else if (burn > fuel)
        {
            printf("You can't burn fuel you don't have\n");
            burnBool = 0;
        }
        else
        {
            printf("Burning %.1f kilograms of fuel\n", burn);
            burnBool = 1;
        }
    }
    return burn;
}