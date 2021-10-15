/*12.Read a string(ending with a $ symbol), store it in an array and count the number of vowels, consonants and spaces in it.*/
#include <stdio.h>
int main()
{
    char str[150];
    int vowels, consonant, space;
    vowels = consonant = space = 0;
    printf("Ayisha Jumaila_Roll no:22\n\n");
    printf("Enter a string            : ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            ++vowels;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            ++consonant;
        }
        else if (str[i] == ' ')
        {
            ++space;
        }
    }
    printf("Vowels in the String      : %d", vowels);
    printf("\nConsonants in the String  : %d", consonant);
    printf("\nSpaces in the String      : %d", space);
    return 0;
}
