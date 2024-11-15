#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// ANSI color codes for green (PASS) and red (FAIL)
#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

/*
 * Objective: Implement the reverseString function that reverses a given string using pointers.
 *
 * Function Signature:
 * void reverseString(char* str);
 *
 * Parameters:
 * - str: A pointer to the string to be reversed. The string is null-terminated.
 *
 * Return Value:
 * - This function returns nothing. It directly modifies the string passed as a parameter.
 *
 * Examples:
 * - Example 1
 *   Input: str = "hello"
 *   Output: str = "olleh"
 *
 * - Example 2
 *   Input: str = "abcde"
 *   Output: str = "edcba"
 */

// Function to reverse a string using pointers
void reverseString(char* str) {
    // TODO: Fill your code here. Note: Using arthmetic pointer manipulation
}

// Simple function to show whether a test passed or failed
void run_test_reverseString(const char *test_name, char* input, const char* expected) {
    reverseString(input);

    if (strcmp(input, expected) == 0) {
        printf(GREEN "[PASS]" RESET " %s\n", test_name);
    } else {
        printf(RED "[FAIL]" RESET " %s\n", test_name);
        printf("    Expected: %s\n", expected);
        printf("    Your output: %s\n", input);
    }
}

// Test cases for the reverseString function
void test_reverseString() {
    char str1[] = "hello";
    run_test_reverseString("test_reverseString_case1", str1, "olleh");

    char str2[] = "abcde";
    run_test_reverseString("test_reverseString_case2", str2, "edcba");

    char str3[] = "a";
    run_test_reverseString("test_reverseString_single_char", str3, "a");

    char str4[] = "";
    run_test_reverseString("test_reverseString_empty", str4, "");
}

// Run all tests and display overall results
void run_all_tests_reverseString() {
    printf("Running reverseString tests...\n\n");
    test_reverseString();
    printf("\nAll tests completed!\n");
}

int main() {
    run_all_tests_reverseString();
    return 0;
}

