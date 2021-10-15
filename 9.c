/*10.Read n integers, store them in an array and sort the elements in the array using Bubble Sort algorithm*/
#include <stdio.h>
int main()
{
    int arr[100], n, c, d, temp;
    printf("Ayisha Jumaila_Roll no:22\n\n");
    printf("Enter number of elements : ");
    scanf("%d", &n);
    printf("Enter %d integers : ", n);
    for (c = 0; c < n; c++)
        scanf("%d", &arr[c]);
    for (c = 0; c < n - 1; c++)
    {
        for (d = 0; d < n - c - 1; d++)
        {
            if (arr[d] > arr[d + 1])
            {
                temp = arr[d];
                arr[d] = arr[d + 1];
                arr[d + 1] = temp;
            }
        }
    }
    printf("Sorted list in ascending order:");
    for (c = 0; c < n; c++)
        printf("%d\t", arr[c]);
    return 0;
}