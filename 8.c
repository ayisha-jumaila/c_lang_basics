/*8. Read n integers, store them in an array and search for an element in the
   array using an algorithm for Linear Search */
#include <stdio.h>
int main()
{
    int arr[100], search, c, n;
    printf("Ayisha Jumaila_Roll no:22\n\n");
    printf("Enter number of elements in array : ");
    scanf("%d", &n);
    printf("Enter %d integer(s) to the array : ", n);
    for (c = 0; c < n; c++)
        scanf("%d", &arr[c]);
    printf("Enter a number to search in the array : ");
    scanf("%d", &search);
    for (c = 0; c < n; c++)
    {
        if (arr[c] == search)
        {
            printf("%d is present at %d.\n", search, c + 1);
            break;
        }
    }
    if (c == n)
        printf("%d is not present in the array.\n", search);
    return 0;
}