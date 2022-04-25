#include <stdio.h>
#include <conio.h>
#define max 5
void main()
{
    int del[max];
    int i = 0, j = 0, in;
    system("cls");
    printf("\t\t:::::Program for Element deletion:::::\n");
    printf("\nEnter the elements of array\n");
    // Taking input in array
    for (i = 0; i < max; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &del[i]);
    }
    printf("\n::Array before deletion::\n");
    for (i = 0; i < max; i++)
    {
        printf("::%d::", del[i]);
    }
    printf("\nEnter the number you want to delete : ");
    scanf("%d", &in);
    // Deletion Logic
    for (i = 0; i < max; i++)
    {
        if (del[i] == in)
        {
            for (j = i; j < max - 1; j++)
            {
                del[j] = del[j + 1];
            }
        }
    }
    printf("\n::Array After Deletion::\n");
    for (i = 0; i < max - 1; i++)
    {
        printf("::%d::", del[i]);
    }
    getch();
}