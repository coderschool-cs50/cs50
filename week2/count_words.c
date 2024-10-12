#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

// ANSI color codes for green (PASS) and red (FAIL)
#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

/*
 * Objective: Implement the count_words function to calculate the number of words in a given string.
 *            A word is defined as a sequence of characters separated by a single space.
 *            The function counts the number of spaces and returns the count of words as spaces + 1.
 *
 * Function Signature:
 * int count_words(string text);
 *
 * Parameters:
 * - text: A pointer to a character array (string) that may contain words separated by spaces.
 *         The string is terminated by a null character ('\0').
 *
 * Return Value:
 * - Return Type: int
 * - The function should return the total count of words found in the input string.
 *
 * Examples:
 * - Example 1
 *   Input: "Hello World"
 *   Output: 2
 *   Explanation: The input contains 2 words, separated by a single space.
 *
 * - Example 2
 *   Input: "C programming is fun"
 *   Output: 4
 *   Explanation: The input contains 4 words.
 */

// Implement the function here
int count_words(string text) {
    // TODO: fill your code here
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

// Test cases for count_words() function
void test_count_words() {
    run_test("test_count_words_empty", "", count_words(""), 0);
    run_test("test_count_words_single_word", "Hello", count_words("Hello"), 1);
    run_test("test_count_words_two_words", "Hello World", count_words("Hello World"), 2);
    run_test("test_count_words_combined_spaces", "This is a test", count_words("This is a test"), 4);
}

// Run all tests and display overall results
void run_all_tests() {
    printf("Running tests...\n\n");
    test_count_words();
    printf("\nAll tests completed!\n");
}

int main() {
    run_all_tests();
    return 0;
}

