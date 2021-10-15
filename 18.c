/*Write a menu driven program for performing matrix addition,
   multiplication and finding the transpose. Use functions to
   (i) read a matrix, (ii) find the sum of two matrices,
  (iii) find the product of two matrices,(iv) find the transpose of a
   matrix and (v) display a matrix.*/
#include <stdio.h>
#include <stdlib.h>
//Read
void readMatrix(int a[][100], int m, int n)
{
    int i, j;
    printf("enter the elements row by row\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
}
//Display
void displayMatrix(int a[][100], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
}
//Addition
void addMatrix(int a[][100], int b[][100], int m, int n)
{
    int i, j, c[100][100];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            c[i][j] = a[i][j] + b[i][j];
    printf("Sum of matrix: \n");
    displayMatrix(c, m, n);
}
//Transpose
void transposeMatrix(int a[][100], int m, int n)
{
    int i, j, c[100][100];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            c[j][i] = a[i][j];

    displayMatrix(c, n, m);
}
// Multiplication
void multMatrix(int a[][100], int b[][100], int m1, int n1, int n2)
{
    int c[100][100], i, j, k;
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
    printf("Product of matrix: \n");
    displayMatrix(c, m1, n2);
}
int main()
{
    int a[100][100], b[100][100], m1, n1, m2, n2, op;
    system("clear");
    printf("Ayisha Jumaila_Roll no:22\n\n");
    printf("Enter the size of the matrix A row*column: ");
    scanf("%d%d", &m1, &n1);
    printf("Enter Matrix A\n");
    readMatrix(a, m1, n1);
    printf("Enter the size of the matrix B row*column: ");
    scanf("%d%d", &m2, &n2);
    printf("Enter Matrix B\n");
    readMatrix(b, m2, n2);
    system("clear");
    printf("Matrix A..\n");
    displayMatrix(a, m1, n1);
    printf("Matrix B..\n");
    displayMatrix(b, m2, n2);
    while (1)
    {
        printf("1.add  2.multiply  3.transpose 4.exit \n");
        printf("Enter the option :");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            if (m1 == m2 && n1 == n2)
                addMatrix(a, b, m1, n1);
            else
                printf("Incompatable matrix...cannot add..\n");
            break;
        case 2:
            if (n1 == m2)
                multMatrix(a, b, m1, n1, n2);
            else
                printf("Incompatable matrix...cannot mutliply..\n");
            break;
        case 3:
            printf("Transpose of A..\n");
            transposeMatrix(a, m1, n1);
            printf("Transpose of B..\n");
            transposeMatrix(b, m2, n2);
            break;
        case 4:
            exit(0);
        }
    }
}