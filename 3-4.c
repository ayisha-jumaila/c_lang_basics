/*3.4 Evaluate the arithmetic expression ((a -b / c * d + e) * (f +g))   and display its solution.*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a, b, c, d, e, f, g, result;
    printf("Ayisha Jumaila_Roll no:22\n\n");
    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter value of b : ");
    scanf("%d", &b);
    printf("Enter value of c : ");
    scanf("%d", &c);
    printf("Enter value of d : ");
    scanf("%d", &d);
    printf("Enter value of e : ");
    scanf("%d", &e);
    printf("Enter value of f : ");
    scanf("%d", &f);
    printf("Enter value of g : ");
    scanf("%d", &g);
    result = ((a - (((b / c) * d) + e)) * (f + g));
    printf("After evaluation the result is :%d ", result);
}