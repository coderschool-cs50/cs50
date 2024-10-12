#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

// ANSI color codes for green (PASS) and red (FAIL)
#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

/*
 * Objective: Implement the count_sentences function to calculate the number of sentences in a given string.
 *            A sentence is defined as a sequence of characters that ends with one of the following punctuation marks:
 *            '.', '!', or '?'.
 *
 * Function Signature:
 * int count_sentences(string text);
 *
 * Parameters:
 * - text: A pointer to a character array (string) that may contain sentences.
 *         The string is terminated by a null character ('\0').
 *
 * Return Value:
 * - Return Type: int
 * - The function should return the total count of sentences found in the input string.
 *
 * Examples:
 * - Example 1
 *   Input: "Hello! How are you?"
 *   Output: 2
 *   Explanation: The input contains 2 sentences, each ending with '!' and '?' respectively.
 *
 * - Example 2
 *   Input: "This is a test. This is only a test."
 *   Output: 2
 *   Explanation: The input contains 2 sentences, each ending with '.'.
 */

// Implement the function here
int count_sentences(string text) {
    // TODO: Fill your code here
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

// Test cases for count_sentences() function
void test_count_sentences() {
    run_test("test_count_sentences_empty", "", count_sentences(""), 0);
    run_test("test_count_sentences_one_sentence", "Hello!", count_sentences("Hello!"), 1);
    run_test("test_count_sentences_two_sentences", "Hello! How are you?", count_sentences("Hello! How are you?"), 2);
    run_test("test_count_sentences_multiple_endings", "This is a test. This is only a test!",
             count_sentences("This is a test. This is only a test!"), 2);
    run_test("test_count_sentences_with_questions", "Is this a question? Yes!", count_sentences("Is this a question? Yes!"), 2);
    run_test("test_count_sentences_trailing_space", "Test sentence. ", count_sentences("Test sentence. "), 1);
    run_test("test_count_sentences_multiple_punctuation", "Hello. Goodbye! Is it really? Yes.",
             count_sentences("Hello. Goodbye! Is it really? Yes."), 4);
}

// Run all tests and display overall results
void run_all_tests() {
    printf("Running tests...\n\n");
    test_count_sentences();
    printf("\nAll tests completed!\n");
}

int main() {
    run_all_tests();
    return 0;
}

