// C code to take array as input form user and sort that array with Selection sort

#include<stdio.h>
#include <stdlib.h>
void print_array(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void Selection_Sort(int *arr, int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        int min_index = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
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

    Selection_Sort(array, n);

    printf("\nSorted Array with Selection Sort \n");
    print_array(array, n);

    return 0;
}
