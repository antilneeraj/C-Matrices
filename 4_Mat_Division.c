/*
C Program to divide two 2x2 Martices
Author : Neeraj
Date : June 02,2022
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// #define max 5

int main()
{
    float a[2][2], b[2][2], inv_b[2][2], result[2][2];
    float row, colm, row_1, colm_1, det_mat, ref_1, ref_2, sum = 0;
    int i, j, k;
    system("cls");
    printf("\n\t\t::::Division of Two Matrices::::\n");
    printf("Enter elements of first matrices : \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter a%d%d element : ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }
    printf("Enter elements of second matrices : \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter b%d%d element : ", i + 1, j + 1);
            scanf("%f", &b[i][j]);
        }
    }
    //-------------------------------------------------------------
    printf("\n\t\t:::: Matrix A ::::\n");
    //-------------------------------------------------------------
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%0.1f\t", a[i][j]);
        }
        printf("\n");
    }
    //-------------------------------------------------------------
    printf("\n\t\t:::: Matrix B ::::\n");
    //-------------------------------------------------------------
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%0.1f\t", b[i][j]);
        }
        printf("\n");
    }

    // Finding Determinant
    det_mat = (b[0][0] * b[1][1]) - (b[0][1] * b[1][0]);
    //-------------------------------------------------------------
    printf("\nDeterminant of Second matrix is : %0.1f\n", det_mat);
    //-------------------------------------------------------------
    // finding adjoint of matrix B

    ref_1 = b[0][0];
    ref_2 = b[1][1];
    b[0][0] = ref_2;
    b[1][1] = ref_1;
    b[0][1] = -(b[0][1]);
    b[1][0] = -(b[1][0]);

    // Inverse of matrix B

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            inv_b[i][j] = (b[i][j]) / det_mat;
        }
    }
    //-------------------------------------------------------------
    printf("\n\t\t::::Inverse of Matrix B ::::\n");
    //-------------------------------------------------------------
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%0.1f\t", inv_b[i][j]);
        }
        printf("\n");
    }
    // Multiplication Logic
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                sum += a[i][k] * inv_b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    // Printing Resultant Matrix
    //-----------------------------------------
    printf("\nResultant Matrix : \n");
    //-----------------------------------------
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%0.1f\t", result[i][j]);
        }
        printf("\n");
    }
    getch();
}   