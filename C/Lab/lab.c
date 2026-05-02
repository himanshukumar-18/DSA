#include <stdio.h>

// all lab problems

// read and display n numbers
int NumberArr();

// transpose 3 * 3 matrix
int TransposeMatrix();

// enter given number in given location
int InsertArr();

// to delete given n number index in array
int DeleteEl();

// majority elements

int majorityElements(int arr[], int n)
{
    int freq = 0, ans = 0, i;

    for (i = 0; i < n; i++)
    {
        if (freq == 0)
            ans = arr[i];

        if (ans == arr[i])
            freq++;
        else
            freq--;
    }

    return ans;
}

// repeted and missing number
int findMissingRepeated(int arr[], int n)
{
    int freq[n + 1];
    int i;

    // Initialize frequency array
    for (i = 0; i <= n; i++)
    {
        freq[i] = 0;
    }

    // Count frequency
    for (i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    int missing = -1, repeated = -1;

    // Find missing and repeated numbers
    for (i = 1; i <= n; i++)
    {
        if (freq[i] == 0)
            missing = i;

        if (freq[i] > 1)
            repeated = i;
    }

    printf("Repeated number = %d\n", repeated);
    printf("Missing number = %d\n", missing);

    return 0;
}

int main()
{
    int arr[] = {1, 2, 3, 3, 5};
    int n = 5;

    findMissingRepeated(arr, n);

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

    // before
    printf("Before Transpose: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // transpose
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
        printf("\n");
    }

    printf("After Transpose: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int InsertArr()
{
    int arr[6], size = 5, i, pos, num; // use arr[6] to allow one extra element after insertion

    printf("Enter array elements: \n");
    for (i = 0; i < size; i++)
    {
        printf("El[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert: ");
    scanf("%d", &pos);

    printf("Enter the number to insert: ");
    scanf("%d", &num);

    if (pos < 1 || pos > size + 1)
    {
        printf("Invalid position. Must be between 1 and %d\n", size + 1);
        return 0;
    }

    // shift el
    for (i = size; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // insert el
    arr[pos - 1] = num;
    size++;

    printf("After inserting array: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

int DeleteEl()
{
    int arr[5], pos, size;
    size = sizeof(arr) / sizeof(int);

    printf("Enter array elements: \n");
    for (int i = 0; i < size; i++)
    {
        printf("el %d = ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    for (int i = pos; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;

    printf("After deleting arry el: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
