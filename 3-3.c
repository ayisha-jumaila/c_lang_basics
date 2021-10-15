/*3.3 Read the radius of a circle, calculate its area and display it*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float radius, area;
    printf("Ayisha Jumaila_Roll no:22\n\n");
    printf("Enter the radius of a circle:");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("Area of the circle : %.2f\n", area);
    return 0;
}