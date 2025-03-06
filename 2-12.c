#include<stdio.h>

int main ()
{
    float x, y;
    printf("Input x and y value:\n");
    scanf("%f%f", &x, &y);

    printf("\nX = %.f\t\t\t", x);
    printf("Y = %.f\n", y);
    printf("Sum = %.f\t\t\t", x+y);
    printf("Difference = %.f\n", x-y);
    printf("Product = %.2f\t\t", x*y);
    printf("Division = %.f\n", x/y);

    return 0;
}
