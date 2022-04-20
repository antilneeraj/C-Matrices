/*
Program to print transpose of a Matrix
Author : Neeraj
Date : January 6, 2022
*/
#include <stdio.h>
#include <conio.h>
#define max 150

void main()
{
    int a[max][max], i, j, trans, rows, colm;
    system("cls");
    printf("\n\t\t::::MATRIX TRANSPOSE::::\n");
    // Takeing Input of rows and columns
    printf("\nEnter number of rows and columns : ");
    scanf("%d%d", &rows, &colm);
    // Taking Input of matrix from User
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < colm; j++)
        {
            printf("Enter a%d%d Element : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n::::MATRIX BERFOR TRANSPOSE::::\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < colm; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    // Logic for the transpose of a matrix
    printf("\n::::MATRIX AFTER TRANSPOSE::::\n");
    for (j = 0; j < colm; j++)
    {
        for (i = 0; i < rows; i++)
        {
            trans = a[i][j];
            printf("%d\t", trans);
        }
        printf("\n");
    }

    getch();
}
