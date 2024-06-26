#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Name : <Insert name>
 * Program to determine combinations
 */

float Factorial(int n)
{
    float f = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}


int Binomial(int n, int k)
{
    float b;

    //printf("Input n: ");
    //scanf_s("%d", &n);
    if (n < 1)
    {
        printf("n Must be greater than zero\n");
        exit(1);
    }

    //printf("Input k: ");
    //scanf_s("%d", &k);
    if (k < 0 || k > n)
    {
        printf("k Must be between 0 and %d inclusive\n", n);
        exit(1);
    }

    printf("n! = %.0f\n", Factorial(n));
    b = Factorial(n) / (Factorial(k) * Factorial(n - k));
    printf("Factorial(k) = %.0f\n", Factorial(k));
    printf("Factorial(n - k) = %.0f\n", Factorial((n - k)));
    printf("%d items taken %d ways is %.0f\n", n, k, b);
    return b;
}



/* Factorial Function */


//int main()
//{
//    Binomial(15,5);
//}