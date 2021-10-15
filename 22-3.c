/*Create a file and perform the following
 i) Write data to the file*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp;
    char t[80];
    fp = fopen("a.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file..");
        exit(1);
    }
    printf("Ayisha Jumaila_Roll no:22\n");
    printf("Enter the text to the text file a.txt and type 'end' to stop\n");
    do
    {
        fgets(t, 80, stdin);
        if (strcmp(t, "end\n") == 0)
            break;
        fputs(t, fp);
    } while (1);
    fclose(fp);
}