/*11.Read two strings (each one ending with a $ symbol),
   store them in  arrays  and  concatenate them without using library functions*/
#include <stdio.h>
int main()
{
    char str1[50], str2[50], i, j;
    printf("Ayisha Jumaila_Roll no:22\n\n");
    printf("Enter the first string  : ");
    scanf("%s", str1);
    printf("Enter the second string : ");
    scanf("%s", str2);
    for (i = 0; str1[i] != '\0'; ++i)
        ;

    for (j = 0; str2[j] != '\0'; ++j, ++i)
        str1[i] = str2[j];

    str1[i] = '\0';
    printf("The Concatenated string : %s", str1);

    return 0;
}
