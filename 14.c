/*Using structure, read and print data of n employees
   (Name, Employee Id and Salary)*/
#include <stdio.h>
struct Employee
{
    int empId;
    char empName[50];
    int empSalary;
} emp[50];
int main()
{
    int n, i;
    system("clear");
    printf("Ayisha Jumaila_Roll no:22\n\n");
    printf("Enter the number of Employees: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter Employee %d details\n", i + 1);
        printf("Employee id     : ");
        scanf("%d", &emp[i].empId);
        getchar();
        printf("Employee name   : ");
        scanf("%[^\n]", emp[i].empName);
        printf("Employee salary : ");
        scanf("%d", &emp[i].empSalary);
    }
    printf("Employee Details\n");
    printf("EMPLOYEE ID       EMPLOYEE NAME    EMPLOYEE SALARY\n");
    for (i = 0; i < n; i++)
        printf("%-15d %-15s %10d\n", emp[i].empId, emp[i].empName, emp[i].empSalary);
}