#include <stdbool.h>
#include <stdio.h>

// ANSI color codes for green (PASS) and red (FAIL)
#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

/*
 * Objective: Implement the findMax function to find the maximum value in a 2-D array of integers.
 *
 * Function Signature:
 * int findMax(int rows, int cols, int arr[rows][cols]);
 *
 * Parameters:
 * - rows: The number of rows in the 2-D array.
 * - cols: The number of columns in the 2-D array.
 * - arr: A 2-D array of integers with dimensions [rows][cols].
 *
 * Return Value:
 * - The function returns the maximum integer value found in the array.
 *
 * Examples:
 * - Example 1
 *   Input: arr = {{3, 8, 12}, {2, 9, 17}, {43, -8, 46}, {203, 14, 97}}
 *   Output: 203
 *   Explanation: The largest value in the array is 203.
 *
 * - Example 2
 *   Input: arr = {{-5, -10, -15}, {-2, -1, -3}}
 *   Output: -1
 *   Explanation: The largest value in the array is -1.
 *
 * - Example 3
 *   Input: arr = {{0}}
 *   Output: 0
 *   Explanation: The array contains a single element, which is 0.
 */

// Function to find the maximum value in a 2-D array
int findMax(int rows, int cols, int arr[rows][cols]) {
    // TODO: Your implementation goes here

    // 1. Initialize max_value to the first element in the array

    // 2. Loop through all elements to find the maximum

    return 0;
}

// Simple function to show whether a test passed or failed
void run_test(const char *test_name, int rows, int cols, int arr[rows][cols], int expected) {
    int result = findMax(rows, cols, arr);

    if (result == expected) {
        printf(GREEN "[PASS]" RESET " %s\n", test_name);
    } else {
        printf(RED "[FAIL]" RESET " %s\n", test_name);
        printf("    Your output: %d\n", result);
        printf("    Expected output: %d\n", expected);
    }
}

// Test cases for the findMax function
void test_findMax() {
    int arr1[4][3] = {
        {3, 8, 12},
        {2, 9, 17},
        {43, -8, 46},
        {203, 14, 97}
    };
    run_test("test_findMax_4x3", 4, 3, arr1, 203);

    int arr2[2][3] = {
        {-5, -10, -15},
        {-2, -1, -3}
    };
    run_test("test_findMax_negatives", 2, 3, arr2, -1);

    int arr3[1][1] = {
        {0}
    };
    run_test("test_findMax_single_element", 1, 1, arr3, 0);

    int arr4[2][2] = {
        {5, 12},
        {10, 1}
    };
    run_test("test_findMax_2x2", 2, 2, arr4, 12);
}

// Run all tests and display overall results
void run_all_tests() {
    printf("Running tests...\n\n");
    test_findMax();
    printf("\nAll tests completed!\n");
}

int main() {
    run_all_tests();
    return 0;
}

