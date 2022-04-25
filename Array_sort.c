/*
C Program to sort the order of an array using bubble sort
Author : Neeraj
Date : April 07, 2022
*/
#include <stdio.h>
#include <conio.h>
#define max 5

int main()
{
    int a[max];
    int temp, i = 0, j = 0;
    printf("\n\t\t::::Sorting of an Array::::\n");
    printf("\nEnter the elements of the array below :\n");
    for (i = 0; i < max; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\nElements Before Sorting : \n");
    for (i = 0; i < max; i++)
    {
        printf("::%d::", a[i]);
    }
    // sorting logic
    for (i = 0; i < max; i++)
    {
        for (j = 0; j < i; j++)
        {

            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nElements After Sorting : \n");
    for (i = 0; i < max; i++)
    {
        printf("::%d::", a[i]);
    }
    getch();
    return 0;
}