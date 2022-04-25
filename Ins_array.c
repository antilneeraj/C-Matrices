#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max 10

void main()
{
    int ins[max];
    int i, j, index, limit;
    system("cls");
    printf("\n\t\t:::::Array Insertion:::::\n");
again:
    printf("How many elements will you eneter : ");
    scanf("%d", &limit);
    // Condition for Array size
    if (limit > 10 || limit < 1) // If size is greater than 10 this loop will execute
    {
        printf("\nEnter a valid limit between 1 to 10.");

        printf("\n\t\tPress Enter to Continue...");
        getch();
        system("cls");
        goto again; // instead of continuing in the sequence, we moved to the again block
    }
    // Taking input in Array
    for (i = 0; i < limit; i++)
    {
        printf("\nEnter Element at index %d : ", i);
        scanf("%d", &ins[i]);
    }
    // Traversing Array (Displaying each element of an array)
    printf("\n::Array Before Insertion::\n");
    for (i = 0; i < limit; i++)
    {
        printf(" | %d", ins[i]);
    }
    // Taking index input to enter element on
    printf("\nEnter the index where you want to insert : ");
    scanf("%d", &index);

    for (i = 0; i < limit; i++)
    {
        if (i == index)
        {
            // Adjusting Elements of Array to next

            for (j = limit + 1; j > i; j--, i++)
            {
                ins[j] = ins[j - 1];
            }
            // Inserting Element at a particular index
            printf("Ener the element at index %d : ", index);
            scanf("%d", &ins[index]);
        }
    }
    // Final Result
    printf("\n::Array After Insertion::\n");
    for (i = 0; i < limit + 1; i++)
    {
        printf("| %d ", ins[i]);
    }
    getch();
}
