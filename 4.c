/*4 Read 3 integer values, find the largest among them.*/
#include <stdio.h>
int main()
{
    double num1, num2, num3;
    printf("Ayisha Jumaila_Roll no:22\n\n");
    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3)
        printf("%.2f is the largest number.", num1);

    if (num2 >= num1 && num2 >= num3)
        printf("%.2f is the largest number.", num2);

    if (num3 >= num1 && num3 >= num2)
        printf("%.2f is the largest number.", num3);

    return 0;
}
