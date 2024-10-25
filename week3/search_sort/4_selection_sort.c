/* Please review this theory section before moving on to the code. Cheers! 🎉
    https://cdn.cs50.net/2017/fall/shorts/selection_sort/selection_sort.pdf
*/

#include <stdbool.h>
#include <stdio.h>

// ANSI color codes for green (PASS) and red (FAIL)
#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

/*
 * Objective: Implement the selection_sort function to sort an array of integers in ascending order.
 *
 * Function Signature:
 * void selection_sort(int arr[], int size);
 *
 * Parameters:
 * - arr: A pointer to an array of integers.
 * - size: The number of elements in the array.
 *
 * Return Value:
 * - The function sorts the array in place, modifying the input array.
 *
 * Examples:
 * - Example 1
 *   Input: arr = [5, 3, 8, 4, 2]
 *   Output: arr = [2, 3, 4, 5, 8]
 *
 * - Example 2
 *   Input: arr = [10, 1, 7, 3, 8]
 *   Output: arr = [1, 3, 7, 8, 10]
 */

// Implement the selection sort function here
void selection_sort(int arr[], int size)
{
    // TODO: Your implementation goes here

    return;
}

// Helper function to check if two arrays are equal
bool arrays_equal(int arr1[], int arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr1[i] != arr2[i])
            return false;
    }
    return true;
}

// Simple function to show whether a test passed or failed
void run_test(const char *test_name, int arr[], int size, int expected[], int expected_size)
{
    selection_sort(arr, size);

    if (arrays_equal(arr, expected, size))
    {
        printf(GREEN "[PASS]" RESET " %s\n", test_name);
    }
    else
    {
        printf(RED "[FAIL]" RESET " %s\n", test_name);
        printf("    Your output: [");
        for (int i = 0; i < size; i++)
        {
            printf("%d", arr[i]);
            if (i < size - 1)
                printf(", ");
        }
        printf("]\n    Expected output: [");
        for (int i = 0; i < expected_size; i++)
        {
            printf("%d", expected[i]);
            if (i < expected_size - 1)
                printf(", ");
        }
        printf("]\n");
    }
}

// Test cases for selection_sort() function
void test_selection_sort()
{
    int arr1[] = {5, 3, 8, 4, 2};
    int expected1[] = {2, 3, 4, 5, 8};
    run_test("test_selection_sort_simple", arr1, 5, expected1, 5);

    int arr2[] = {10, 1, 7, 3, 8};
    int expected2[] = {1, 3, 7, 8, 10};
    run_test("test_selection_sort_unsorted", arr2, 5, expected2, 5);

    int arr3[] = {1, 2, 3, 4, 5};
    int expected3[] = {1, 2, 3, 4, 5};
    run_test("test_selection_sort_already_sorted", arr3, 5, expected3, 5);

    int arr4[] = {5, 4, 3, 2, 1};
    int expected4[] = {1, 2, 3, 4, 5};
    run_test("test_selection_sort_reverse_sorted", arr4, 5, expected4, 5);

    int arr5[] = {3, 3, 3, 3};
    int expected5[] = {3, 3, 3, 3};
    run_test("test_selection_sort_all_same", arr5, 4, expected5, 4);
}

// Run all tests and display overall results
void run_all_tests()
{
    printf("Running tests...\n\n");
    test_selection_sort();
    printf("\nAll tests completed!\n");
}

int main()
{
    run_all_tests();
    return 0;
}
