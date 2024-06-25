#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846 

int main()
{
    double angle;
    int numSteps = 20;
    double maxAngle = M_PI * 2;
    int i;
    double sinVal;


    for (i = 0; i <= numSteps; i++)
    {
        angle = (double)i / (double)numSteps * maxAngle;
        sinVal = sin(angle);
        printf("%3d: %5.2f %6.3f\n", i, angle, sinVal);

    }
}


