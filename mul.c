#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max 5
void main()
{
    int mul[max][max], mul1[max][max], mul2[max][max];
    int i, j, k, row, colm, row1, colm1, sum = 0;
    system("cls");
    printf("\n\t\t::::Matrix Multiplication::::");
    printf("\nEnter the rows of first Matrix:");
    scanf("%d", &row);
    printf("\nEnter the colm of first Matrix:");
    scanf("%d", &colm);
    printf("\nEnter the rows of Second Matrix:");
    scanf("%d", &row1);
    printf("\nEnter the colm of Second Matrix:");
    scanf("%d", &colm1);
    if (colm != row1)
    {
        printf("\n\t::::The condition for Multiplication is not satisfied::::");
        exit(0);
    }
    printf("\nEnter the elements of Matrix I\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < colm; j++)
        {
            printf("Enter a%d%d element :", i + 1, j + 1);
            scanf("%d", &mul[i][j]);
        }
    }
    printf("\nEnter the elements of Matrix II\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < colm1; j++)
        {
            printf("Enter b%d%d element :", i + 1, j + 1);
            scanf("%d", &mul1[i][j]);
        }
    }
    printf("\n::Matrix 1::\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < colm; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    printf("\n::Matrix 2::\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < colm1; j++)
        {
            printf("%d\t", mul1[i][j]);
        }
        printf("\n");
    }
    // Multiplication Logic
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < colm1; j++)
        {
            for (k = 0; k < row1; k++)
            {
                sum += mul[i][k] * mul1[k][j];
            }
            mul2[i][j] = sum;
            sum = 0;
        }
    }
    printf("\n::After Multiplication::\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < colm1; j++)
        {
            printf("%d\t", mul2[i][j]);
        }
        printf("\n");
    }

    getch();
}