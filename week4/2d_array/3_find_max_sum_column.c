#include <stdbool.h>
#include <stdio.h>

// ANSI color codes for green (PASS) and red (FAIL)
#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

/*
 * Objective: Implement the maxCol function to find the column with the maximum sum in a 2-D array of integers.
 *
 * Function Signature:
 * int maxCol(int rows, int cols, int arr[rows][cols]);
 *
 * Parameters:
 * - rows: The number of rows in the 2-D array.
 * - cols: The number of columns in the 2-D array.
 * - arr: A 2-D array of integers with dimensions [rows][cols].
 *
 * Return Value:
 * - The function returns the index of the column that has the highest sum.
 * - If there is a tie between columns, the function should return the column with the smaller index.
 *
 * Examples:
 * - Example 1
 *   Input: arr = {{3, 8, 12}, {2, 9, 17}, {43, -8, 46}, {203, 14, 97}}
 *   Output: 2
 *   Explanation: Column 2 has the largest sum of elements.
 *
 * - Example 2
 *   Input: arr = {{-5, -10, -15}, {-2, -1, -3}}
 *   Output: 1
 *   Explanation: Column 1 has the largest sum (even though all values are negative).
 *
 * - Example 3
 *   Input: arr = {{7}}
 *   Output: 0
 *   Explanation: The array contains a single column, which is column 0.
 */

// Function to find the column with the maximum sum in a 2-D array
int maxCol(int rows, int cols, int arr[rows][cols]) {
    // TODO: Fill your code here
}

// Simple function to show whether a test passed or failed
void run_test(const char *test_name, int rows, int cols, int arr[rows][cols], int expected) {
    int result = maxCol(rows, cols, arr);

    if (result == expected) {
        printf(GREEN "[PASS]" RESET " %s\n", test_name);
    } else {
        printf(RED "[FAIL]" RESET " %s\n", test_name);
        printf("    Your output: %d\n", result);
        printf("    Expected output: %d\n", expected);
    }
}

// Test cases for the maxCol function
void test_maxCol() {
    int arr1[4][3] = {
        {3, 8, 12},
        {2, 9, 17},
        {43, -8, 46},
        {203, 14, 97}
    };
    run_test("test_maxCol_4x3", 4, 3, arr1, 0);

    int arr2[2][3] = {
        {-5, -10, -1},
        {-2, -1, -3}
    };
    run_test("test_maxCol_negatives", 2, 3, arr2, 2);

    int arr3[1][1] = {
        {0}
    };
    run_test("test_maxCol_single_element", 1, 1, arr3, 0);

    int arr4[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    run_test("test_maxCol_tie", 3, 3, arr4, 2);
}

// Run all tests and display overall results
void run_all_tests() {
    printf("Running tests...\n\n");
    test_maxCol();
    printf("\nAll tests completed!\n");
}

int main() {
    run_all_tests();
    return 0;
}

