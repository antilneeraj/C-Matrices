/*
Program to print addition of two matrices
Author : Neeraj
Date : December 18,2021
*/
#include <stdio.h>
#include <conio.h>

void main()
{
    printf(":::::::ADDITION OF TWO MATRIX:::::::");
    int a[2][2], b[2][2], c[2][2], i = 0, j = 0;

    printf("\nEnter Elements of First Matrix -\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);   
        }
    }

    printf("\nEnter Elements of Second Matrix -\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

     printf("\n1st Matrix -\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\t\t%d", a[i][j]);   
        }
          printf("\n");
    }

    printf("\n2nd Matrix -\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\t\t%d", b[i][j]);
        }
          printf("\n");
    }
   
    printf("\nAddition of above matrix is : \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            // printf("\nThe a%d%d Element of resultant Matrix is : %d", i + 1, j + 1, c[i][j]);
            printf("\t\t%d", c[i][j]);
            
        }
        printf("\n");
    }
    getch();
}