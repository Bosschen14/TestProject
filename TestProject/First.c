#include <stdio.h>
#include <math.h>

const PI = 3.14;

float resonantFreq(float num1, float num2)
{
    float oumiga = 0;

    oumiga = 1 / (sqrt(num1 * num2));
    oumiga = oumiga / 2 / PI;
    return oumiga;
}



//int main()
//{
//    float C = 0;
//    float L = 0;
//    printf("Input Capacitance(microfarads): \n");
//    scanf_s( "%f", &C);
//    printf("Input Inductance (millihenrys): \n");
//    scanf_s("%f", &L);
//    L = L / 1000;
//    C = C / 1000000;
//    printf("Capacitance in farads: %f\n", C);
//    printf("Resonant Frequency is %f\n", resonantFreq(L, C));
//    return 0;
//}