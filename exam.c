#include <stdio.h>
struct student
{
    char bookName[50];
    int bookNo;
    int bookPages;
    float bookPrice;
} s[5];
int main()
{
    int i;
    printf("Enter details of Books to be stored:\n");
    for (i = 0; i < 5; ++i)
    {
        s[i].bookNo = i + 1;
        printf("\nFor Book %d,\n", s[i].bookNo);
        printf("Enter Book Name: ");
        scanf("%s", s[i].bookName);
        printf("Enter Book Price: ");
        scanf("%f", &s[i].bookPrice);
        printf("Enter Book Pages: ");
        scanf("%f", &s[i].bookPages);
    }
    printf("Displaying Information:\n\n");
    for (i = 0; i < 5; ++i)
    {
        printf("\nBook Number: %d\n", i + 1);
        printf("Book name: ");
        puts(s[i].bookName);
        printf("Price of book: %.1f", s[i].bookPrice);
        printf("\n");
        printf("Number of pages: %.2f", s[i].bookPages);
        printf("\n");
    }
    printf("Ayisha Jumaila\nRoll no:22");
    return 0;
}