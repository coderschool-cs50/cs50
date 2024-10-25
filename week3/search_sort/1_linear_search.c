/* Please review this theory section before moving on to the code. Cheers! 🎉
    https://cdn.cs50.net/2017/fall/shorts/linear_search/linear_search.pdf
*/

#include <stdbool.h>
#include <stdio.h>

// ANSI color codes for green (PASS) and red (FAIL)
#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

/*
 * Objective: Implement the linear_search function to find a target number in an array of integers.
 *
 * Function Signature:
 * bool linear_search(int arr[], int size, int target);
 *
 * Parameters:
 * - arr: A pointer to an array of integers.
 * - size: The number of elements in the array.
 * - target: The integer to search for in the array.
 *
 * Return Value:
 * - Return Type: bool
 * - The function should return true if the target is found, and false otherwise.
 *
 * Examples:
 * - Example 1
 *   Input: arr = [3, 1, 9, 12, 4], target = 12
 *   Output: true
 *   Explanation: The target 12 is present in the array.
 *
 * - Example 2
 *   Input: arr = [9, 20, 11, 6], target = 7
 *   Output: false
 *   Explanation: The target 7 is not present in the array.
 */

// Implement the linear search function here
bool linear_search(int arr[], int size, int target)
{
    // TODO: Your implementation goes here

    return false;
}

// Simple function to show whether a test passed or failed
void run_test(const char *test_name, int arr[], int size, int target, bool result, bool expected)
{
    if (result == expected)
    {
        printf(GREEN "[PASS]" RESET " %s\n", test_name);
    }
    else
    {
        printf(RED "[FAIL]" RESET " %s\n", test_name);
        printf("    Array: [");
        for (int i = 0; i < size; i++)
        {
            printf("%d", arr[i]);
            if (i < size - 1)
                printf(", ");
        }
        printf("]\n");
        printf("    Target: %d\n", target);
        printf("    Your output: %s\n", result ? "true" : "false");
        printf("    Expected output: %s\n", expected ? "true" : "false");
    }
}

// Test cases for linear_search() function
void test_linear_search()
{
    int arr1[] = {3, 1, 9, 12, 4};
    int arr2[] = {9, 20, 11, 6};
    int arr3[] = {};
    int arr4[] = {100, 200, 300};
    int arr5[] = {23, 18, 5};

    run_test("test_linear_search_found", arr1, 5, 12, linear_search(arr1, 5, 12), true);
    run_test("test_linear_search_not_found", arr2, 4, 7, linear_search(arr2, 4, 7), false);
    run_test("test_linear_search_empty_array", arr3, 0, 14, linear_search(arr3, 0, 14), false);
    run_test("test_linear_search_last_element", arr4, 3, 300, linear_search(arr4, 3, 300), true);
    run_test("test_linear_search_first_element", arr5, 3, 23, linear_search(arr5, 3, 23), true);
}

// Run all tests and display overall results
void run_all_tests()
{
    printf("Running tests...\n\n");
    test_linear_search();
    printf("\nAll tests completed!\n");
}

int main()
{
    run_all_tests();
    return 0;
}
