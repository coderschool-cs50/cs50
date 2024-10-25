#include <stdbool.h>
#include <stdio.h>

// ANSI color codes for green (PASS) and red (FAIL)
#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

/*
 * Objective: Implement the digitSum function recursively to calculate the sum of the digits of a
 * given positive integer n.
 *
 * Function Signature:
 * int digitSum(int n);
 *
 * Parameters:
 * - n: A positive integer whose digit sum needs to be calculated.
 *
 * Return Value:
 * - The function returns the sum of the digits of n.
 *
 * Examples:
 * - Example 1
 *   Input: n = 1729
 *   Output: 19
 *   Explanation: The sum of digits 1 + 7 + 2 + 9 is 19.
 *
 * - Example 2
 *   Input: n = 5
 *   Output: 5
 *   Explanation: Single digit returns the number itself.
 *
 * - Example 3
 *   Input: n = 1001
 *   Output: 2
 *   Explanation: The sum of digits 1 + 0 + 0 + 1 is 2.
 */

// Recursive function to sum digits of a positive number
int digitSum(int n)
{
    // TODO: Your implementation goes here

    // 1. Base case

    // 2. Recursive

    return 0;
}

// Simple function to show whether a test passed or failed
void run_test(const char *test_name, int input, int expected)
{
    int result = digitSum(input);

    if (result == expected)
    {
        printf(GREEN "[PASS]" RESET " %s\n", test_name);
    }
    else
    {
        printf(RED "[FAIL]" RESET " %s\n", test_name);
        printf("    Input: %d\n", input);
        printf("    Your output: %d\n", result);
        printf("    Expected output: %d\n", expected);
    }
}

// Test cases for the digitSum function
void test_digitSum()
{
    run_test("test_digitSum_1729", 1729, 19);
    run_test("test_digitSum_5", 5, 5);
    run_test("test_digitSum_1001", 1001, 2);
    run_test("test_digitSum_9999", 9999, 36);
    run_test("test_digitSum_123456", 123456, 21);
}

// Run all tests and display overall results
void run_all_tests()
{
    printf("Running tests...\n\n");
    test_digitSum();
    printf("\nAll tests completed!\n");
}

int main()
{
    run_all_tests();
    return 0;
}
