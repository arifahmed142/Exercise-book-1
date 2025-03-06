#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c;
    printf("Enter 3 Sides of Triangle:\n");
    scanf("%f%f%f", &a, &b, &c);

    float s = (a+b+c)/2;

    float A = sqrt (s*(s-a)*(s-b)*(s-c));

    if (a+b>c && a+c>b && b+c>a) {
        printf("The Area of Triangle: %.2f", A);
    }
    else {
        printf("Triangle is not possible with these sides.");
    }

    return 0;
}
