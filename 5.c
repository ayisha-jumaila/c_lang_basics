/*5. Read a Natural Number and check whether the number is prime or not*/
#include <stdio.h>
int main()
{
    int num, i, flag = 0;
    printf("Ayisha Jumaila_Roll no:22\n\n");
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (num == 1)
    {
        printf("1 is neither prime nor composite.");
    }
    else
    {
        if (flag == 0)
            printf("%d is a prime number.", num);
        else
            printf("%d is not a prime number.", num);
    }
    return 0;
}