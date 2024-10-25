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

/*
 * Function: find_min
 * - Finds the minimum vote total for any candidate still in the election.
 *
 * Returns:
 * - The minimum number of votes of any remaining candidate.
 */
int find_min(void)
{
    // TODO: fill your code here

    return 0;
}

/*
 * Function to run an individual test case to validate the find_min function
 *
 * Parameters:
 * - test_name: A string describing the test case.
 * - expected_min: The expected minimum number of votes.
 */
void run_test(const char *test_name, int expected_min)
{
    int result = find_min();

    // Display the result of the test
    if (result == expected_min)
    {
        printf(GREEN "[PASS]" RESET " %s\n", test_name);
    }
    else
    {
        printf(RED "[FAIL]" RESET " %s\n", test_name);
        printf("    Expected: %d, Got: %d\n", expected_min, result);
    }
    printf("\n");
}

/*
 * Function to run multiple test cases for the find_min function
 *
 * Example setup:
 * - 3 candidates: Alice, Bob, and Charlie.
 * - Multiple test cases are defined to check the find_min logic.
 */
void run_test_cases()
{
    // Example setup for testing
    candidate_count = 3;

    // Test case 1: Alice has the minimum number of votes
    candidates[0] = (candidate) {"Alice", 3, false};
    candidates[1] = (candidate) {"Bob", 5, false};
    candidates[2] = (candidate) {"Charlie", 7, false};
    run_test("Test case 1: Alice has the fewest votes", 3);

    // Test case 2: Bob has the minimum number of votes, Charlie is eliminated
    candidates[0] = (candidate) {"Alice", 6, false};
    candidates[1] = (candidate) {"Bob", 4, false};
    candidates[2] = (candidate) {"Charlie", 3, true}; // Charlie is eliminated
    run_test("Test case 2: Bob has the fewest votes", 4);

    // Test case 3: Two candidates (Alice and Bob) have the same minimum vote
    candidates[0] = (candidate) {"Alice", 3, false};
    candidates[1] = (candidate) {"Bob", 3, false};
    candidates[2] = (candidate) {"Charlie", 7, false}; // Charlie has more votes
    run_test("Test case 3: Alice and Bob have the same minimum votes", 3);
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
