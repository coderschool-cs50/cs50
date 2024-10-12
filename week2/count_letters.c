// test_count_letters.c
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

// ANSI color codes for green (PASS) and red (FAIL)
#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

/*
 * Objective: Implement the count_letters function to calculate the number of alphabetic characters in a given string.
 *            Alphabetic characters include both uppercase and lowercase letters (A-Z, a-z).
 *            Non-alphabetic characters, such as numbers, punctuation marks, spaces, and symbols, should not be counted.
 *
 * Function Signature:
 * int count_letters(string text);
 *
 * Parameters:
 * - text: A pointer to a character array (string) that may contain letters, numbers, punctuation marks, and spaces.
 *         The string is terminated by a null character ('\0').
 *
 * Return Value:
 * - Return Type: int
 * - The function should return the total count of alphabetic characters found in the input string.
 *
 * Examples:
 * - Example 1
 *   Input: "Hello, World!"
 *   Output: 10
 *   Explanation: The input contains 10 alphabetic characters (ignoring punctuation and spaces).
 *
 * - Example 2
 *   Input: "12345"
 *   Output: 0
 *   Explanation: There are no alphabetic characters in this input.
 *
 * - Example 3
 *   Input: "C Programming!"
 *   Output: 12
 *   Explanation: The input contains 12 alphabetic characters.
 */

// Implement the function here
int count_letters(string text) {
    // TODO: Your implementation goes here
    return 0;
}

// Simple function to show whether a test passed or failed
void run_test(const char* test_name, const char* input, int result, int expected) {
    if (result == expected) {
        printf(GREEN "[PASS]" RESET " %s\n", test_name);
    } else {
        printf(RED "[FAIL]" RESET " %s\n", test_name);
        printf("    Input: \"%s\"\n", input);
        printf("    Your output: %d\n", result);
        printf("    Expected output: %d\n", expected);
    }
}

// Test cases for count_letters() function
void test_count_letters() {
    run_test("test_count_letters_empty", "", count_letters(""), 0);
    run_test("test_count_letters_only_letters", "Hello", count_letters("Hello"), 5);
    run_test("test_count_letters_mixed", "Hello, World!", count_letters("Hello, World!"), 10);
    run_test("test_count_letters_non_letters", "12345!@#$%", count_letters("12345!@#$%"), 0);
    run_test("test_count_letters_upper_lower", "AbCdEfG", count_letters("AbCdEfG"), 7);
    run_test("test_count_letters_long_text", "This is a longer sentence with 32 letters.",
             count_letters("This is a longer sentence with 32 letters."), 32);
}

// Run all tests and display overall results
void run_all_tests() {
    printf("Running tests...\n\n");
    test_count_letters();
    printf("\nAll tests completed!\n");
}

int main() {
    run_all_tests();
    return 0;
}

