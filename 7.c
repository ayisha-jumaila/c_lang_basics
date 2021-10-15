//7. Read n integers, store them in an array and find their sum and average
#include <stdio.h>
int main()
{
    int a[100], num, i, sum = 0;
    printf("Ayisha Jumaila_Roll no:22\n\n");
    printf("Enter the number of elements you want to insert : ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("\nThe sum of the array is : %d", sum);
    printf("\nThe average of the array is : %0.2f ", (float)sum / num);
}