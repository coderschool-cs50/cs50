#include <stdbool.h>
#include <stdio.h>

// ANSI color codes for green (PASS) and red (FAIL)
#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

/*
 * Objective: Implement the fib function to calculate the nth Fibonacci number.
 *
 * Function Signature:
 * int fib(int n);
 *
 * Parameters:
 * - n: An integer representing the position in the Fibonacci sequence (n >= 0).
 *
 * Return Value:
 * - The function returns the Fibonacci number at position n.
 *
 * Fibonacci Sequence:
 * - F(0) = 0, F(1) = 1
 * - F(n) = F(n - 1) + F(n - 2) for n > 1
 *
 * Examples:
 * - Example 1
 *   Input: n = 2
 *   Output: 1
 *   Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
 *
 * - Example 2
 *   Input: n = 3
 *   Output: 2
 *   Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.
 *
 * - Example 3
 *   Input: n = 4
 *   Output: 3
 *   Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.
 */

// Implement the Fibonacci function here
int fib(int n)
{
    // TODO: Your implementation goes here

    // 1. Base case

    // 2. Recursive

    return 0;
}

// Simple function to show whether a test passed or failed
void run_test(const char *test_name, int input, int expected)
{
    int result = fib(input);

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

// Test cases for the Fibonacci function
void test_fib()
{
    run_test("test_fib_0", 0, 0);
    run_test("test_fib_1", 1, 1);
    run_test("test_fib_2", 2, 1);
    run_test("test_fib_3", 3, 2);
    run_test("test_fib_4", 4, 3);
    run_test("test_fib_5", 5, 5);
    run_test("test_fib_10", 10, 55);
    run_test("test_fib_15", 15, 610);
}

// Run all tests and display overall results
void run_all_tests()
{
    printf("Running tests...\n\n");
    test_fib();
    printf("\nAll tests completed!\n");
}

int main()
{
    run_all_tests();
    return 0;
}
