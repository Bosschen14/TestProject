//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
///*
// * Name : <Insert name here>
// * Program to compute the zeros of a
// * quadratic equation
// */
//
//void InputQuadraticEquation(double* a, double* b, double* c)
//{
//
//    printf("Input a: ");
//    scanf_s("%lf", a);
//    printf("Input b: ");
//    scanf_s("%lf", b);
//    printf("Input c: ");
//    scanf_s("%lf", c);
//}
//
//
//void QuadraticEquation(double a, double b, double c,
//    double* pZ1r, double* pZ1i, double* pZ2r, double* pZ2i)
//{
//    /* Insert function body here */
//
//        /* Values for the quadratic formula */
//    double discriminant;
//
//
//    /*
//     * This code computes the quadratic equation
//     * for both real and complex zeros
//     */
//
//     /* Compute the discriminant */
//    discriminant = b * b - 4 * a * c;
//    if (discriminant >= 0)
//    {
//        /* If the discriminant is greater than or
//           equal to zero, the zeros are real */
//        *pZ1r = (-b + sqrt(discriminant)) / (2 * a);
//        *pZ1i = (-b - sqrt(discriminant)) / (2 * a);
//        *pZ2r = 0;
//        *pZ2i = 0;
//    }
//    else
//    {
//        /* If the discriminant is less than zero
//           the zeros are complex  */
//        *pZ1r = -b / (2 * a);
//        *pZ1i = *pZ1r;
//        *pZ2r = sqrt(-discriminant) / (2 * a);
//        *pZ2i = -sqrt(-discriminant) / (2 * a);
//    }
//
//    /* Display the results */
//    printf("Zero 1: %f + %fj\n", *pZ1r, *pZ1i);
//    printf("Zero 2: %f + %fj\n", *pZ2r, *pZ2i);
//
//
//}
//
//
//int main()
//{
//    double a ;
//    double b ;
//    double c ;
//    double Z1r;
//    double Z1i;
//    double Z2r;
//    double Z2i;
//    double* pZ1r = &Z1r;
//    double* pZ1i = &Z1i;
//    double* pZ2r = &Z2r;
//    double* pZ2i = &Z2i;
//    InputQuadraticEquation(&a, &b, &c);
//    QuadraticEquation(a, b, c, pZ1r, pZ1i, pZ2r, pZ2i);
//}
