/*Declare a union containing 5 string variables
   (Name, House Name, City Name, State and Pin code) each with a length
   of C_SIZE (user defined constant). Then, read and display the address
   of a  person using a variable of the union.*/
#include <stdio.h>
#include <string.h>
#define C_SIZE 50
union Address
{
    char name[C_SIZE];
    char houseName[C_SIZE];
    char cityName[C_SIZE];
    char stateName[C_SIZE];
    char pinCode[C_SIZE];
};
int main()
{
    union Address record1;
    printf("Ayisha Jumaila_Roll no:22\n\n");
    printf("Enter Name:");
    scanf("%[^\n]", record1.name);
    printf("UNION RECORD VALUES\n");
    printf(" Name          : %s \n", record1.name);
    getchar();
    printf("\nEnter House Name:");
    scanf("%[^\n]", record1.houseName);
    printf(" House Name     : %s \n", record1.houseName);
    getchar();
    printf("\nEnter City Name:");
    scanf("%[^\n]", record1.cityName);
    getchar();
    printf(" City Name     : %s \n\n", record1.cityName);
    printf("\nEnter State Name:");
    scanf("%[^\n]", record1.stateName);
    getchar();
    printf(" State name     : %s \n", record1.stateName);
    printf("\nEnter Pincode:");
    scanf("%[^\n]", record1.pinCode);
    printf(" Pincode     : %s \n\n", record1.pinCode);
    printf("UNION VALUES RECORDING COMPLETE, THANK YOU :)\n");
}
