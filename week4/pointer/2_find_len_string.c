#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// ANSI color codes for green (PASS) and red (FAIL)
#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

/*
 * Objective: Implement the strLength function that calculates the length of a string using pointers.
 *
 * Function Signature:
 * int strLength(char* str);
 *
 * Parameters:
 * - str: A pointer to the null-terminated string whose length needs to be calculated.
 *
 * Return Value:
 * - The function returns the length of the string (number of characters before the null terminator).
 *
 * Examples:
 * - Example 1
 *   Input: str = "hello"
 *   Output: 5
 *
 * - Example 2
 *   Input: str = "C programming"
 *   Output: 14
 *
 * - Example 3
 *   Input: str = "a"
 *   Output: 1
 */

// Function to find the length of a string using pointers
int strLength(char* str) {
    // TODO Fill your code here. Note: Using Pointer Arthmetic
    return 0;
}

// Simple function to show whether a test passed or failed
void run_test_strLength(const char *test_name, char* input, int expected) {
    int result = strLength(input);

    if (result == expected) {
        printf(GREEN "[PASS]" RESET " %s\n", test_name);
    } else {
        printf(RED "[FAIL]" RESET " %s\n", test_name);
        printf("    Expected: %d\n", expected);
        printf("    Your output: %d\n", result);
    }
}

// Test cases for the strLength function
void test_strLength() {
    char str1[] = "hello";
    run_test_strLength("test_strLength_case1", str1, 5);

    char str2[] = "C programming";
    run_test_strLength("test_strLength_case2", str2, 13);

    char str3[] = "a";
    run_test_strLength("test_strLength_single_char", str3, 1);

    char str4[] = "";
    run_test_strLength("test_strLength_empty", str4, 0);
}

// Run all tests and display overall results
void run_all_tests_strLength() {
    printf("Running strLength tests...\n\n");
    test_strLength();
    printf("\nAll tests completed!\n");
}

int main() {
    run_all_tests_strLength();
    return 0;
}

