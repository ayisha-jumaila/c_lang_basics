/*Do the following using pointers
i) add two numbers*/
#include <stdio.h>
int main()
{

    int num1, num2, *p1, *p2, sum;
    printf("Ayisha Jumaila_Roll no:22\n");
    printf("Enter two integers to add : ");
    scanf("%d%d", &num1, &num2);
    p1 = &num1;
    p2 = &num2;
    sum = *p1 + *p2;
    printf("Sum of the numbers :  %d\n", sum);
}