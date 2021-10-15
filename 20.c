/*Input and Print the elements of an array using pointers*/
#include <stdio.h>
int main()
{
    int arr[100];
    int n, i;
    int *ptr = arr;
    printf("Ayisha Jumaila_Roll no:22\n\n");
    printf("Enter size of Array: ");
    scanf("%d", &n);

    printf("Enter elements in Array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }

    printf("Entered Array elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr + i));
    }
}