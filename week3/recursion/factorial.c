#include <stdbool.h>
#include <stdio.h>

// ANSI color codes for green (PASS) and red (FAIL)
#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

/*
 * Objective: Implement the factorial function recursively to calculate the factorial of a given
 * integer n.
 *
 * Function Signature:
 * int factorial(int n);
 *
 * Parameters:
 * - n: An integer whose factorial needs to be calculated (n >= 0).
 *
 * Return Value:
 * - The function returns the factorial of n.
 *
 * Factorial Definition:
 * - factorial(0) = 1
 * - factorial(1) = 1
 * - factorial(n) = n * factorial(n - 1) for n > 1
 *
 * Examples:
 * - Example 1
 *   Input: n = 4
 *   Output: 24
 *   Explanation: factorial(4) = 4 * 3 * 2 * 1 = 24.
 *
 * - Example 2
 *   Input: n = 5
 *   Output: 120
 *   Explanation: factorial(5) = 5 * 4 * 3 * 2 * 1 = 120.
 *
 * - Example 3
 *   Input: n = 0
 *   Output: 1
 *   Explanation: The factorial of 0 is defined to be 1.
 */

// Implement the recursive factorial function here
int factorial(int n)
{
    // TODO: Your implementation goes here

    // 1. Base case

    // 2. Recursive

    return 0;
}

// Simple function to show whether a test passed or failed
void run_test(const char *test_name, int input, int expected)
{
    int result = factorial(input);

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

// Test cases for the factorial function
void test_factorial()
{
    run_test("test_factorial_0", 0, 1);
    run_test("test_factorial_1", 1, 1);
    run_test("test_factorial_2", 2, 2);
    run_test("test_factorial_3", 3, 6);
    run_test("test_factorial_4", 4, 24);
    run_test("test_factorial_5", 5, 120);
    run_test("test_factorial_6", 6, 720);
    run_test("test_factorial_10", 10, 3628800);
}

// Run all tests and display overall results
void run_all_tests()
{
    printf("Running tests...\n\n");
    test_factorial();
    printf("\nAll tests completed!\n");
}

int main()
{
    run_all_tests();
    return 0;
}
