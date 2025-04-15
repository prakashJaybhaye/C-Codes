// C code to take array as input form user and sort that array with Bubble sort

#include <stdio.h>
#include <stdlib.h>

void print_array(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void bubble_sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter Value of n \n");
    scanf("%d", &n);

    int *array = (int *)malloc(n * sizeof(int));
    int i;
    printf("Enter %d Array Element\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Original Array \n");
    print_array(array, n);

    bubble_sort(array, n);

    printf("\nSorted Array with Bubble Sort \n");
    print_array(array, n);

    return 0;
}
