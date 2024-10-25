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

// Define maximum values
#define MAX_CANDIDATES 9

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

/*
 * Function: is_tie
 * - Checks if all remaining candidates have the same number of votes as 'min'.
 *
 * Parameters:
 * - min: The minimum number of votes for any candidate still in the election.
 *
 * Returns:
 * - true if all remaining candidates are tied (i.e., all have votes equal to 'min').
 * - false if there is any candidate who does not have votes equal to 'min'.
 */
bool is_tie(int min)
{
    // TODO: fill your code here

    return false;
}

/*
 * Function to run an individual test case to validate the is_tie function
 *
 * Parameters:
 * - test_name: A string describing the test case.
 * - min_votes: The minimum number of votes passed to the is_tie function.
 * - expected_result: The expected result of the function (true/false for tie).
 */
void run_test(const char *test_name, int min_votes, bool expected_result)
{
    bool result = is_tie(min_votes);

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
 * Function to run multiple test cases for the is_tie function
 *
 * Example setup:
 * - 3 candidates: Alice, Bob, and Charlie.
 * - Multiple test cases are defined to check the is_tie logic.
 */
void run_test_cases()
{
    // Example setup for testing
    candidate_count = 3;

    // Test case 1: All remaining candidates have the same number of votes (3 votes)
    candidates[0] = (candidate) {"Alice", 3, false};
    candidates[1] = (candidate) {"Bob", 3, false};
    candidates[2] = (candidate) {"Charlie", 3, false};
    run_test("Test case 1: All candidates tied with 3 votes", 3, true);

    // Test case 2: Bob has more votes, so no tie
    candidates[0] = (candidate) {"Alice", 3, false};
    candidates[1] = (candidate) {"Bob", 5, false};
    candidates[2] = (candidate) {"Charlie", 3, false};
    run_test("Test case 2: No tie because Bob has more votes", 3, false);

    // Test case 3: Charlie is eliminated, remaining candidates are tied
    candidates[0] = (candidate) {"Alice", 2, false};
    candidates[1] = (candidate) {"Bob", 2, false};
    candidates[2] = (candidate) {"Charlie", 3, true}; // Charlie is eliminated
    run_test("Test case 3: Tie between Alice and Bob, Charlie eliminated", 2, true);

    // Test case 4: Alice and Charlie have different votes, so no tie
    candidates[0] = (candidate) {"Alice", 4, false};
    candidates[1] = (candidate) {"Bob", 4, true}; // Bob is eliminated
    candidates[2] = (candidate) {"Charlie", 5, false};
    run_test("Test case 4: No tie between Alice and Charlie", 4, false);
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
