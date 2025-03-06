#include<stdio.h>
#include<math.h>

void main()
{
    int x=4, y=5;

    float r = sqrt((x*x)+(y*y));

    float perimeter = 2*3.1416*r ;

    float area = 3.1416*r*r;

    printf("The Perimeter of Circle is: %.2f\n", perimeter);
    printf("The Area of Circle is: %.2f\n", area);

    return 0;
}
