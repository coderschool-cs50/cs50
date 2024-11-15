#include <stdbool.h>
#include <stdio.h>

// ANSI color codes for green (PASS) and red (FAIL)
#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

/*
 * Objective: Implement the findMinMax function to find both the minimum and maximum values in an array
 * of integers using pointers.
 *
 * Function Signature:
 * void findMinMax(int* arr, int size, int* min, int* max);
 *
 * Parameters:
 * - arr: A pointer to the first element of an integer array.
 * - size: The number of elements in the array.
 * - min: A pointer to an integer where the function should store the minimum value found.
 * - max: A pointer to an integer where the function should store the maximum value found.
 *
 * Return Value:
 * - This function returns nothing. It should update the values pointed to by `min` and `max`.
 *
 * Examples:
 * - Example 1
 *   Input: arr = [3, 5, 1, 9, 2], size = 5
 *   Output: min = 1, max = 9
 *
 * - Example 2
 *   Input: arr = [-10, -5, -3, -8], size = 4
 *   Output: min = -10, max = -3
 */

// Function to find the minimum and maximum values in an array using pointers
void findMinMax(int* arr, int size, int* min, int* max) {
    // TODO: Fill your code here
}

// Simple function to show whether a test passed or failed
void run_test_findMinMax(const char *test_name, int arr[], int size, int expected_min, int expected_max) {
    int min = 0, max = 0;
    findMinMax(arr, size, &min, &max);

    if (min == expected_min && max == expected_max) {
        printf(GREEN "[PASS]" RESET " %s\n", test_name);
    } else {
        printf(RED "[FAIL]" RESET " %s\n", test_name);
        printf("    Expected output: min = %d, max = %d\n", expected_min, expected_max);
        printf("    Your output: min = %d, max = %d\n", min, max);
    }
}

// Test cases for the findMinMax function
void test_findMinMax() {
    int arr1[] = {3, 5, 1, 9, 2};
    run_test_findMinMax("test_findMinMax_case1", arr1, 5, 1, 9);

    int arr2[] = {-10, -5, -3, -8};
    run_test_findMinMax("test_findMinMax_negative_values", arr2, 4, -10, -3);

    int arr3[] = {42};
    run_test_findMinMax("test_findMinMax_single_element", arr3, 1, 42, 42);

    int arr4[] = {};
    run_test_findMinMax("test_findMinMax_empty_array", arr4, 0, 0, 0);
}

// Run all tests and display overall results
void run_all_tests_findMinMax() {
    printf("Running findMinMax tests...\n\n");
    test_findMinMax();
    printf("\nAll tests completed!\n");
}

int main() {
    run_all_tests_findMinMax();
    return 0;
}

