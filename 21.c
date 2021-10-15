/*21.Compute sum of the elements stored in an array using pointers and
   user defined functions.*/
#include <stdio.h>
#include <stdlib.h>
int arraySum(int *ptr, int n)
{
    int sum = 0, i;
    for (i = 0; i < n; i++)
    {
        sum = sum + *(ptr + i);
    }
    return sum;
}
int main()
{
    int arr[] = {12, 15, 16, 27, 12, 23};
    int sum;
    sum = arraySum(arr, 6);
    printf("Ayisha Jumaila_Roll no:22\n\n");
    printf("Array elements sum=:%d\t", sum);
}