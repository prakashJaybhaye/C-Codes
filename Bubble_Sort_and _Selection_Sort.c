#include <stdio.h>
#include <stdlib.h>

// Function to print the elements of an array
void Print_Array(int *arr, int arr_size)
{
    int i;
    for (i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]); // Print each element followed by a space
    }
    printf("\n"); // Print a newline at the end
}

// Function to perform Bubble Sort on an array
void Bubble_Sort(int *arr, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) // Loop through each element in the array
    {
        for (j = 0; j < n - 1 - i; j++) // Loop through the array up to the sorted part
        {
            if (arr[j] > arr[j + 1]) // If the current element is greater than the next element
            {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform Selection Sort on an array
void Selection_Sort(int *arr, int n)
{
    int i, j;
    for (i = 0; i < n; i++) // Loop through each element in the array
    {
        int temp, min_index = i;    // Assume the current element is the minimum
        for (j = i + 1; j < n; j++) // Loop through the remaining elements
        {
            if (arr[j] < arr[min_index]) // If a smaller element is found
            {
                min_index = j; // Update the index of the minimum element
            }
        }
        // Swap the minimum element with the current element
        temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
}

// Function to take array input from the user
void Input_Array(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Read each element from the user
    }
}

int main()
{
    int arr_size_1, arr_size_2;

    // Input size and elements for the first array
    printf("Enter Size of Array_1 \n");
    scanf("%d", &arr_size_1);
    printf("Enter %d Array Element\n", arr_size_1);

    int *array_1 = malloc(arr_size_1 * sizeof(int)); // Allocate memory for the first array

    Input_Array(array_1, arr_size_1); // Take input for the first array

    // Input size and elements for the second array
    printf("Enter Size of Array_2 \n");
    scanf("%d", &arr_size_2);
    printf("Enter %d Array Element\n", arr_size_2);

    int *array_2 = malloc(arr_size_2 * sizeof(int)); // Allocate memory for the second array

    Input_Array(array_2, arr_size_2); // Take input for the second array

    // Print the original first array
    printf("Array 1 original\n");
    Print_Array(array_1, arr_size_1);

    // Sort the first array using Bubble Sort
    Bubble_Sort(array_1, arr_size_1);

    // Print the first array after Bubble Sort
    printf("Array 1 After Bubble Sort\n");
    Print_Array(array_1, arr_size_1);

    // Print the original second array
    printf("Array 2 original\n");
    Print_Array(array_2, arr_size_2);

    // Sort the second array using Selection Sort
    Selection_Sort(array_2, arr_size_2);

    // Print the second array after Selection Sort
    printf("Array 2 After Selection Sort\n");
    Print_Array(array_2, arr_size_2);

    return 0;
}
