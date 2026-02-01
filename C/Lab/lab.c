#include <stdio.h>

// all lab problems

// read and display n numbers
int NumberArr();

// transpose 3 * 3 matrix
int TransposeMatrix();

// enter given number in given location
int InsertArr();

int main()
{
    // call here
    InsertArr();

    return 0;
}

int NumberArr()
{
    // variables
    int n, i;

    // number input from user
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // create array to input n numbers
    int arr[n];

    // loop for store n numbers in array
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Element[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // print n number to display
    printf("ELEMENT IN ARRAY:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

int TransposeMatrix()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int transpose[3][3];
    int i, j;

    //before
    printf("Before Transpose: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // transpose
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
        printf("\n");
    }

    printf("After Transpose: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int InsertArr()
{
    int arr[50], n, i, pos, num;

    printf("Enter number of el: ");
    scanf("%d", &n);

    printf("Enter array elements: \n");
    for(i = 0; i < n; i++)
    {   
        printf("El[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert (1 to %d)", n + 1);
    scanf("%d", &pos);

    printf("Enter the number to insert: ");
    scanf("%d", &num);

    // shift el
    for(i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // insert el
    arr[pos - 1] = num;
    n++;

    printf("After inserting array: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}









