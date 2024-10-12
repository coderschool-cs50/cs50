#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>

// ANSI color codes for green (PASS) and red (FAIL)
#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

/*
 * Objective: Implement a function that takes a string and a key, and shifts each alphabetic character
 *            in the string by the key value. Non-alphabetic characters should remain unchanged.
 *
 * Function Signature:
 * string simple_encrypt(string text, int key);
 *
 * Parameters:
 * - text: A pointer to a character array (string) that may contain letters, numbers, punctuation marks,
 *         and spaces. The string is terminated by a null character ('\0').
 * - key: An integer that represents how many positions each letter should be shifted.
 *
 * Return Value:
 * - The function should return a new string where each alphabetic character is shifted by the specified key.
 *
 * Examples:
 * - Example 1:
 *   Input: "Hello, World!", 3
 *   Output: "Khoor, Zruog!"
 *   Explanation: Each letter is shifted by three positions in the alphabet.
 *
 * - Example 2:
 *   Input: "xyz", 3
 *   Output: "abc"
 *   Explanation: The letters wrap around from 'z' to 'a'.
 *
 * - Example 3:
 *   Input: "123 Go!", 3
 *   Output: "123 Jr!"
 *   Explanation: Non-alphabetic characters remain unchanged.
 */

string simple_encrypt(string text, int key) {
    // TODO: Fill your code here
    return "";
}

// Function to run tests and check results
void run_test(const char* test_name, const char* input, int key, const char* expected) {
    // Allocate memory for the input string
    string text = malloc(strlen(input) + 1);
    if (text == NULL) {
        printf(RED "[FAIL]" RESET " Memory allocation failed!\n");
        return;
    }
    strcpy(text, input); // Copy the input string to allocated memory

    string result = simple_encrypt(text, key);
    if (strcmp(result, expected) == 0) {
        printf(GREEN "[PASS]" RESET " %s\n", test_name);
    } else {
        printf(RED "[FAIL]" RESET " %s\n", test_name);
        printf("    Input: \"%s\"\n", input);
        printf("    Key: %d\n", key);
        printf("    Your output: \"%s\"\n", result);
        printf("    Expected output: \"%s\"\n", expected);
    }

    free(text); // Free the allocated memory for input
}

// Test cases for simple_encrypt() function
void test_simple_encrypt() {
    run_test("test_simple_encrypt_empty", "", 3, "");
    run_test("test_simple_encrypt_single_word", "Hello", 3, "Khoor");
    run_test("test_simple_encrypt_mixed_case", "Hello World!", 3, "Khoor Zruog!");
    run_test("test_simple_encrypt_with_numbers", "123 Go!", 3, "123 Jr!");
    run_test("test_simple_encrypt_wrap_around", "xyz", 3, "abc");
    run_test("test_simple_encrypt_special_characters", "Good Day: @2024", 5, "Ltti Ifd: @2024");
}

// Run all tests and display overall results
void run_all_tests() {
    printf("Running tests...\n\n");
    test_simple_encrypt();
    printf("\nAll tests completed!\n");
}

int main() {
    run_all_tests();
    return 0;
}
