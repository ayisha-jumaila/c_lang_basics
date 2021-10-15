/*10.Read a string (word), store it in an array and check whether it is a
   palindrome word or not.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    int i, len, flag = 0;
    printf("Ayisha Jumaila_Roll no:22\n\n");
    printf("Enter a string: ");
    scanf("%s", str1);
    len = strlen(str1);
    for (i = 0; i < len; i++)
    {
        if (str1[i] != str1[len - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("%s is not a palindrome.", str1);
    }
    else
    {
        printf("%s is a palindrome.", str1);
    }
    return 0;
}