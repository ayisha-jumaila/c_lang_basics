/*Do the following using pointers
ii) swap two numbers using user defined function*/
#include <stdio.h>
void swap(int *num1p, int *num2p)
{
    int temp = *num1p;
    *num1p = *num2p;
    *num1p = temp;
}
int main()
{
    int num1, num2;
    printf("Ayisha Jumaila_Roll no:22\n\n");
    printf("Enter Value of Number 1 : ");
    scanf("%d", &num1);
    printf("\nEnter Value of Number 2 : ");
    scanf("%d", &num2);
    swap(&num1, &num2);
    printf("\nAfter Swapping\n Number 1 : %d, Number 2 : %d", num1, num2);
    return 0;
}