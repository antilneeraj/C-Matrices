/*
Program to Print Sum of diagonal of a Matrix
Author : Neeraj
Date : January 6, 2022
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max 100

void main()
{
    int a[max][max], sum, i, j, rows, colm, ref;
    new : system("cls");
    sum = 0;
    printf("\n\t\t::::MATRIX DIAGONAL ADDITION::::\n");
    printf("Enter Number of rows : ");
    scanf("%d", &rows);
    printf("Enter Number of columns : ");
    scanf("%d", &colm);
    if (rows != colm)
    {
        printf("There is no true diagonal exists.");
        goto again;
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < colm; j++)
        {
            printf("Enter a%d%d Element : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\t\t::::MATRIX YOU ENTERED::::\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < colm; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < colm; j++)
        {

            if (i == j)
            {
                sum = sum + a[i][j];
            }
        }
    }
    printf("\nThe Sum of Diagonal is : %d", sum);
again:
    getch();
    goto new;
}