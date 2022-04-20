/*
Program to print Multiplication of Matrix
Author : Neeraj
Date : January 17, 2022
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max 10

void main()
{
    int rows, rows_1, colm, colm_1, sum = 0;
    int a[max][max], b[max][max], result[max][max];
    int i, j, k;
    printf("Enter no. of Rows for Matrix 1 : ");
    scanf("%d", &rows);
    printf("Enter no. of Columns for Matrix 1 : ");
    scanf("%d", &colm);
    printf("Enter no. of Rows for Matrix 2 : ");
    scanf("%d", &rows_1);
    printf("Enter no. of Columns for Matrix 2 : ");
    scanf("%d", &colm_1);
    // Condition for Multiplication
    if (colm != rows_1)
    {
        printf("\nOrder Mismatched. Matrices cannot be Multiplied");
        exit(0);
    }
    // Input for Matrix 1
    printf("\nEnter Elements of Matrix 1 :\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < colm; j++)
        {
            printf("\nEnter Element %d%d of Matrix 1 : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    // Input for Matrix 2
    printf("\nEnter Elements of Matrix 2 :\n");
    for (i = 0; i < rows_1; i++)
    {
        for (j = 0; j < colm_1; j++)
        {
            printf("\nEnter Element %d%d of Matrix 2 : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    //Printing Matrix 1
    printf("\nMatrix 1: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < colm; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    //Printing Matrix 2
    printf("\nMatrix 2: \n");
    for (i = 0; i < rows_1; i++)
    {
        for (j = 0; j < colm_1; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    // Multiplication Logic
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < colm_1; j++)
        {
            for (k = 0; k < rows_1; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    // Printing Resultant Matrix
    printf("\nResultant Matrix : \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < colm_1; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    getch();
}