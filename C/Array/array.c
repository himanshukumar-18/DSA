// array DSA
#include <stdio.h>
#include <math.h>

// 1. simple array insert from user and print elements.
int Arr();

// 2. find smallest digit in array
int ArrSmallest();

// 3. find largest digit in array
int ArrLargest();

// 4. change array element from reference
int RefArr(int arr[], int size);

// 5. linear search ex - target = 10
int LinearSearch();

// 6. reverse of array
int RevArr();

// 7. find product and sun of all array elements
int ProductAndSumArr();

// 8. swap min = max && max = min
int SwapMaxMin();

// 9. find unique element and print el
int UniqueEl();

// 10. print intersection of two array
int IntersectionTwoArr();

// array inverse
int ArrTranspose();

// read and display n number using array - lab1
int NumberArr();

// main function
int main()
{
    // calling function
    NumberArr();
    return 0;
}

// -- Solution of all questions -- //
int Arr()
{
    int sz = 5;
    int marks[sz];

    printf("ARRAY SIZE: %d\n", sz);

    // input array el
    for (int i = 0; i < sz; i++)
    {
        printf("ELEMENT[%d]: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // print array
    for (int i = 0; i < sz; i++)
    {
        printf("ARRAY ELEMENT[%d]:[%d]\n", i + 1, marks[i]);
    }

    return 0;
}

int ArrSmallest()
{
    int arr[] = {5, 15, 22, 1, -15, 25};
    // size cal of arr
    int sz = sizeof(arr) / sizeof(int);
    // set smallest variable for store smallest value of array el
    int sm = __INT_MAX__;
    int index;

    // check on by one
    for (int i = 0; i < sz; i++)
    {
        // apply condition if arr el smaller then sm then sm update el of arr;
        if (arr[i] < sm)
        {
            // update sm
            sm = arr[i];
            index = i;
        }
    }

    // print final smallest el in array
    printf("SMALLEST EL OF ARRAY:[%d]", sm);
    printf("INDEX OF SMALLEST EL OF ARRAY:[%d]", index);

    return 0;
}

int ArrLargest()
{
    int arr[] = {5, 15, 22, 1, -15, 25};
    // size cal of arr
    int sz = sizeof(arr) / sizeof(int);
    // set largest variable for store largest value of array el
    int largest = 0;
    int index;

    // check on by one
    for (int i = 0; i < sz; i++)
    {
        // apply condition if arr el larger then largest then largest replace with el of arr;
        if (arr[i] > largest)
        {
            // update sm
            largest = arr[i];
            index = i;
        }
    }

    // print final smallest el in array
    printf("LARGEST EL OF ARRAY:[%d]\n", largest);
    printf("INDEX OF LARGEST EL OF ARRAY:[%d]\n", index);

    return 0;
}

int RefArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }

    return 0;
}

int LinearSearch()
{
    // create arr
    int arr[] = {4, 2, 7, 8, 1, 2, 5};

    // cal size of arr
    int size = sizeof(arr) / sizeof(int);

    // target we can acchive
    int target = 8;

    // apply loop for linear search
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 8)
        {
            return i;
        }
    }

    return -1;
}

int RevArr()
{
    // myArr
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    // cal size
    int size = sizeof(arr) / sizeof(int);
    // start point for swaping
    int start = 0;
    // end point for swaping
    int end = size - 1;

    // logic
    while (start < end)
    {
        // swap
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // update
        start++;
        end--;
    }

    // after
    printf("AFTER REV: \n");
    for (int i = 0; i < size; i++)
    {
        printf("EL = [%d]:[%d]\n", i, arr[i]);
    }

    return 0;
}

int ProductAndSumArr()
{
    // arr
    int arr[] = {10, 12, 16, 18, 20};

    // size
    int sz = sizeof(arr) / sizeof(int);

    // product store
    double product = 1;

    // sum store
    int sum = 0;

    // logic apply loop
    for (int i = 0; i < sz; i++)
    {
        product *= arr[i];
        sum += arr[i];
    }

    printf("PRODUCT:[%.2f]\n", product);
    printf("SUM:[%d]\n", sum);

    return 0;
}

int SwapMaxMin()
{
    // arr
    int arr[] = {5, 15, 22, 1, -15, 25};

    // size
    int sz = sizeof(arr) / sizeof(int);

    // print before swap
    printf("BEFORE SWAP:\n");
    for (int i = 0; i < sz; i++)
    {
        printf("EL = [%d]:[%d]\n", i, arr[i]);
    }

    // find max
    int maxIndex = 0;
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }

    // find min
    int minIndex = 0;
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }

    // swap max and min
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;

    // print after swap
    printf("\nAFTER SWAP:\n");
    for (int i = 0; i < sz; i++)
    {
        printf("EL = [%d]:[%d]\n", i, arr[i]);
    }

    return 0;
}

int UniqueEl()
{
    // Create a array
    int arr[] = {8, 5, 8, 5, 1, 4};

    // Cal size
    int size = sizeof(arr) / sizeof(int);

    // print unique elements
    printf("UNIQUE ELEMENTS:\n");
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        // Count how many times arr[i] appears in the array
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        // If count is 1, element is unique
        if (count == 1)
        {
            printf("UNIQUE EL = [%d]\n", arr[i]);
        }
    }

    return 0;
}

int IntersectionTwoArr()
{
    int arr_1[] = {1, 2, 3, 4, 5};
    int arr_2[] = {3, 4, 5, 6, 7};

    // Calculate sizes
    int size1 = sizeof(arr_1) / sizeof(int);
    int size2 = sizeof(arr_2) / sizeof(int);

    printf("ARRAY 1: ");
    for (int i = 0; i < size1; i++)
    {
        printf("[%d] ", arr_1[i]);
    }
    printf("\n");

    printf("ARRAY 2: ");
    for (int i = 0; i < size2; i++)
    {
        printf("[%d] ", arr_2[i]);
    }
    printf("\n");

    // Find intersection
    printf("INTERSECTION: ");
    for (int i = 0; i < size1; i++)
    {
        // Check if arr_1[i] exists in arr_2
        for (int j = 0; j < size2; j++)
        {
            if (arr_1[i] == arr_2[j])
            {
                printf("[%d] ", arr_1[i]);
                break; // Move to next element in arr_1
            }
        }
    }
    printf("\n");

    return 0;
}

int ArrTranspose()
{
    // Create an array
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Create an inverse array
    int transpose[3][3];

    //after transpose
    printf("BEFORE TRANSPOSE: \n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j <  3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // logic to transpose
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    //transpose print
    printf("Transpose El: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

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
    for(i = 0; i < n; i++)
    {
        printf("Element[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }


    // print n number to display
    printf("ELEMENT IN ARRAY:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}