/* Please review this theory section before moving on to the code. Cheers! 🎉
    https://cdn.cs50.net/2017/fall/shorts/binary_search/binary_search.pdf
*/

#include <stdbool.h>
#include <stdio.h>

// ANSI color codes for green (PASS) and red (FAIL)
#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

/*
 * Objective: Implement the binary_search function to find a target number in a sorted array of
 * integers.
 *
 * Function Signature:
 * bool binary_search(int arr[], int size, int target);
 *
 * Parameters:
 * - arr: A pointer to an array of integers (sorted in ascending order).
 * - size: The number of elements in the array.
 * - target: The integer to search for in the array.
 *
 * Return Value:
 * - Return Type: bool
 * - The function should return true if the target is found, and false otherwise.
 *
 * Examples:
 * - Example 1
 *   Input: arr = [1, 2, 3, 4, 5], target = 3
 *   Output: true
 *   Explanation: The target 3 is present in the array.
 *
 * - Example 2
 *   Input: arr = [10, 20, 30, 40], target = 25
 *   Output: false
 *   Explanation: The target 25 is not present in the array.
 */

// Implement the binary search function here
bool binary_search(int arr[], int size, int target)
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

// Test cases for binary_search() function
void test_binary_search()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30, 40, 50};
    int arr3[] = {};
    int arr4[] = {100, 200, 300};
    int arr5[] = {1, 2, 3, 4, 5, 7};

    run_test("test_binary_search_found", arr1, 5, 3, binary_search(arr1, 5, 3), true);
    run_test("test_binary_search_not_found", arr2, 5, 25, binary_search(arr2, 5, 25), false);
    run_test("test_binary_search_empty_array", arr3, 0, 14, binary_search(arr3, 0, 14), false);
    run_test("test_binary_search_last_element", arr4, 3, 300, binary_search(arr4, 3, 300), true);
    run_test("test_binary_search_first_element", arr5, 5, 1, binary_search(arr5, 6, 1), true);
}

// Run all tests and display overall results
void run_all_tests()
{
    printf("Running tests...\n\n");
    test_binary_search();
    printf("\nAll tests completed!\n");
}

int main()
{
    run_all_tests();
    return 0;
}
