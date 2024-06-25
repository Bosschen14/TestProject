#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846 

int getNumSpaces(float sinVal)
{
    float numSpaces;
    numSpaces = 30 + sinVal * 30;
    return numSpaces;

}




int step3()
{
    double angle;
    int numSteps = 20;
    scanf_s("%d", &numSteps);
    double maxAngle = M_PI * 2;
    int i;
    double sinVal;


    for (i = 0; i <= numSteps; i++)
    {   
        int k = 0;
        angle = (double)i / (double)numSteps * maxAngle;
        sinVal = sin(angle);
        printf("%3d: %5.2f %6.3f ", i, angle, sinVal);
        k = getNumSpaces(sinVal);
        while (k > 0)
        {
            printf(" ");
            k--;
        }
        printf("*\n");
       
    }
}

