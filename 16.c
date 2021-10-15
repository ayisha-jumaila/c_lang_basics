/*Find the factorial of a given Natural Number n using:
    i) a non recursive function
    ii)a recursive function*/
#include <stdio.h>
long int fact1(int n)
{
    int i;
    long int f = 1;
    for (i = 1; i <= n; i++)
        f = f * i;
    return f;
}
long int fact2(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * fact2(n - 1));
}
int main()
{
    int n;
    system("clear");
    printf("Ayisha Jumaila_Roll no:22\n\n");
    printf("Enter the number to find factorial:");
    scanf("%d", &n);
    printf("Factorial using non recursive function,  %d! : %ld\n", n, fact1(n));
    printf("Factorial using recursive function,      %d! : %ld\n", n, fact2(n));
}