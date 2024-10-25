/* These exercises are designed to help everyone understand the function of each part in the pset
Runoff. Before starting, please review the whole context here:
https://cs50.harvard.edu/x/2024/psets/3/runoff/#hints. Happy coding, everyone! 🚀
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

// ANSI color codes for green (PASS) and red (FAIL)
#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

#define MAX_CANDIDATES 9
#define MAX_VOTERS 100

// Define a candidate struct
typedef struct
{
    string name;
    int votes;
    bool eliminated;
} candidate;

// Global variables
candidate candidates[MAX_CANDIDATES];
int candidate_count;
int voter_count;

/*
 * Function: print_winner
 * - Checks if any candidate has more than half of the total votes.
 * - If a candidate has more than half, print their name and return true.
 * - If no one has more than half, return false.
 *
 * Returns:
 * - true if a candidate has more than half the votes.
 * - false if no one has more than half.
 */
bool print_winner(void)
{
    // TODO: fill your code here

    return false;
}

/*
 * Function to run an individual test case to validate the print_winner function
 *
 * Parameters:
 * - test_name: A string describing the test case.
 * - expected_result: The expected result of the function (true or false).
 */
void run_test(const char *test_name, bool expected_result)
{
    bool result = print_winner();

    // Display the result of the test
    if (result == expected_result)
    {
        printf(GREEN "[PASS]" RESET " %s\n", test_name);
    }
    else
    {
        printf(RED "[FAIL]" RESET " %s\n", test_name);
        printf("    Expected: %s, Got: %s\n", expected_result ? "true" : "false",
               result ? "true" : "false");
    }
    printf("\n");
}

/*
 * Function to run multiple test cases for the print_winner function
 *
 * Example setup:
 * - 3 candidates: Alice, Bob, and Charlie.
 * - Multiple test cases are defined to check the print_winner logic.
 */
void run_test_cases()
{
    // Example setup for testing
    candidate_count = 3;

    // Test case 1: Alice has more than half of the votes
    voter_count = 6;                                 // Total voters
    candidates[0] = (candidate) {"Alice", 4, false}; // Alice has 4 votes (more than 6/2)
    candidates[1] = (candidate) {"Bob", 1, false};
    candidates[2] = (candidate) {"Charlie", 1, false};
    run_test("Test Alice as winner with more than half votes", true);

    // Test case 2: No one has more than half the votes
    voter_count = 5; // Total voters
    candidates[0] = (candidate) {"Alice", 2, false};
    candidates[1] = (candidate) {"Bob", 2, false};
    candidates[2] = (candidate) {"Charlie", 1, false};
    run_test("Test no winner with no one over half", false);

    // Test case 3: Bob wins with more than half of the votes
    voter_count = 8; // Total voters
    candidates[0] = (candidate) {"Alice", 3, false};
    candidates[1] = (candidate) {"Bob", 5, false}; // Bob has 5 votes (more than 8/2)
    candidates[2] = (candidate) {"Charlie", 0, false};
    run_test("Test Bob as winner with more than half votes", true);
}

// Run all tests and display overall results
void run_all_tests()
{
    printf("Running all test cases...\n\n");
    run_test_cases();
    printf("\nAll tests completed!\n");
}

int main(void)
{
    // Run all test cases
    run_all_tests();
    return 0;
}
