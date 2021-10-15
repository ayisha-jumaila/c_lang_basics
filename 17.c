/*Read a string (word), store it in an array and obtain its reverse by
   using a  user defined function.*/
#include <stdio.h>
#include <string.h>
void strRev(char str[])
{
    int i, n;
    char c;
    n = strlen(str);
    for (i = 0; i < n / 2; i++)
    {
        c = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = c;
    }
}
int main()
{
    char str[100];
    system("clear");
    printf("Ayisha Jumaila_Roll no:22\n\n");
    printf("Enter the string   : ");
    scanf("%[^\n]", str);
    strRev(str);
    printf("Reversed string is : %s", str);
}