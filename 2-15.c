#include<stdio.h>
#include<math.h>

void main()
{
    float x1=2, x2=5, y1=2, y2=6;
    float D = sqrt ( ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)) );

    float r = D/2;

    float a = 3.1416*r*r;

    printf("The Final Area of Circle is: %.2f", a);
}
