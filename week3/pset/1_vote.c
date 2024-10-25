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

#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

// Define a candidate struct
typedef struct
{
    string name;
    int votes;
    bool eliminated;
} candidate;

// Global variables
int preferences[MAX_VOTERS][MAX_CANDIDATES];
candidate candidates[MAX_CANDIDATES];
int candidate_count;

/*
 * Function: vote
 * - Records a voter's ranked preference for a candidate.
 *
 * Parameters:
 * - voter: An integer representing the voter number.
 * - rank: An integer representing the rank the voter is assigning to a candidate.
 * - name: A string representing the candidate's name that the voter is voting for.
 *
 * Returns:
 * - true if the vote is valid and recorded successfully.
 * - false if the candidate name does not match any valid candidates.
 */
bool vote(int voter, int rank, string name)
{
    // TODO: fill your code here

    return false;
}

/*
 * Function to run an individual test case to validate the vote function
 *
 * Parameters:
 * - test_name: A string describing the test case.
 * - result from vote function
 * - expected: The expected result of the vote (true or false).
 *
 * Functionality:
 * - The function runs the vote function with the provided parameters.
 * - It compares the result to the expected output.
 * - If the result matches the expected output, it prints [PASS] in green.
 * - If the result does not match the expected output, it prints [FAIL] in red and provides details.
 */
void run_test(const char *test_name, bool result, bool expected)
{
    // Display the result and expected outcome
    if (result == expected)
    {
        printf(GREEN "[PASS]" RESET " %s\n", test_name);
    }
    else
    {
        printf(RED "[FAIL]" RESET " %s\n", test_name);
        // printf("    Voter: %d, Rank: %d, Name: %s\n", voter, rank, name);
        printf("    Expected: %s, Got: %s\n", expected ? "true" : "false",
               result ? "true" : "false");
    }
    printf("\n");
}

/*
 * Function to run multiple test cases for the vote function
 *
 * Example setup:
 * - 3 candidates: Alice, Bob, and Charlie.
 * - Multiple test cases are defined to check valid votes for these candidates,
 *   and invalid votes for a non-existent candidate.
 */
void run_test_cases()
{
    // Example setup for testing
    candidate_count = 3;
    candidates[0].name = "Alice";
    candidates[1].name = "Bob";
    candidates[2].name = "Charlie";

    // Test cases
    run_test("Test vote for Alice as 1st preference", vote(0, 0, "Alice"), true);
    run_test("Test vote for Bob as 2nd preference", vote(0, 1, "Bob"), true);
    run_test("Test vote for Charlie as 3rd preference", vote(0, 2, "Charlie"), true);
    run_test("Test vote for non-existent candidate David", vote(0, 3, "David"), false);
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
