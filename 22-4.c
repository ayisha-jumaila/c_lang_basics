/*Create a file and perform the following
 ii) Read the data in a given file & display the file content on console*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char t[100];
    fp = fopen("a.txt", "r");
    if (fp == NULL)
    {
        printf("Ayisha Jumaila_Roll no:22\n\n");
        printf("Error opening source file..");
        exit(1);
    }
    while ((fgets(t, sizeof(t), fp) != NULL))
    {
        printf("%s", t);
    }
    fclose(fp);
}