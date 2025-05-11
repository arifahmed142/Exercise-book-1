#include<stdio.h>
#include<math.h>

int main()
{
    int x1, x2, y1, y2;
    printf("Enter Values in Order (x1, x2, y1, y2):\n");
    scanf("%d%d%d%d", &x1,&x2,&y1,&y2);

    float D = sqrt ( ((x2-x1)*(x2-x1))) + sqrt ( ((y2-y1)*(y2-y1)) );

    printf("Distance Between Two Point: %.2f", D);

    return 0 ;
}
