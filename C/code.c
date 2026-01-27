// array DSA
#include <stdio.h>
#include <math.h>

int Arr();
int ArrSmallest();
int ArrLargest();
// int ChangeArr();
int LinearSearch();
int RevArr();

int main()
{
    int srch = LinearSearch();
    printf("TARGET INDEX:[%d]", srch);
    return 0;
}

int Arr()
{
    int sz = 5;
    int marks[sz];

    printf("ARRAY SIZE: %d\n", sz);

    // input array el
    for (int i = 0; i < 5; i++)
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

int ChangeArr(int arr[], int size)
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

    // before

    while (start < end)
    {
    }

    // after
    printf("AFTER REV: ");

    return 0;
}