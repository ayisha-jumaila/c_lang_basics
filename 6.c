/*6. Read a Natural Number and check whether the number is Armstrong or not*/
#include <stdio.h>
int main()
{
    int num, r, sum = 0, temp;
    printf("Ayisha Jumaila_Roll no:22\n\n");
    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        r = num % 10;
        sum = sum + (r * r * r);
        num = num / 10;
    }
    if (temp == sum)
        printf("This is an Armstrong  number ");
    else
        printf("This is not an Armstrong number");
    return 0;
}
