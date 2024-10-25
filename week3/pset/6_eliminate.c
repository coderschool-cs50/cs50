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
 * Function: eliminate
 * - Eliminates all candidates with the minimum number of votes.
 *
 * Parameters:
 * - min: The minimum number of votes any candidate has.
 */
void eliminate(int min)
{
    // TODO: fill your code here

    return;
}

/*
 * Function to run an individual test case to validate the eliminate function
 *
 * Parameters:
 * - test_name: A string describing the test case.
 * - expected_eliminations: Array indicating expected eliminated status of candidates after calling
 * eliminate.
 */
void run_test(const char *test_name, bool expected_eliminations[])
{
    bool all_correct = true;

    // Check if the elimination result matches the expected result
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].eliminated != expected_eliminations[i])
        {
            all_correct = false;
            break;
        }
    }

    // Display the result of the test
    if (all_correct)
    {
        printf(GREEN "[PASS]" RESET " %s\n", test_name);
    }
    else
    {
        printf(RED "[FAIL]" RESET " %s\n", test_name);
        printf("    Expected eliminated status: ");
        for (int i = 0; i < candidate_count; i++)
        {
            printf("%s ", expected_eliminations[i] ? "true" : "false");
        }
        printf("\n    Got eliminated status: ");
        for (int i = 0; i < candidate_count; i++)
        {
            printf("%s ", candidates[i].eliminated ? "true" : "false");
        }
        printf("\n");
    }
    printf("\n");
}

/*
 * Function to run multiple test cases for the eliminate function
 *
 * Example setup:
 * - 3 candidates: Alice, Bob, and Charlie.
 * - Multiple test cases are defined to check elimination logic for different scenarios.
 */
void run_test_cases()
{
    // Example setup for testing
    candidate_count = 3;

    // Test case 1: Eliminate candidate(s) with minimum votes
    candidates[0] = (candidate) {"Alice", 1, false};
    candidates[1] = (candidate) {"Bob", 2, false};
    candidates[2] = (candidate) {"Charlie", 1, false};
    eliminate(1);
    bool expected1[] = {true, false, true};
    run_test("Test eliminate candidates with 1 vote", expected1);

    // Test case 2: Eliminate candidate(s) with minimum votes when all candidates have different
    // votes
    candidates[0] = (candidate) {"Alice", 3, false};
    candidates[1] = (candidate) {"Bob", 2, false};
    candidates[2] = (candidate) {"Charlie", 1, false};
    eliminate(1);
    bool expected2[] = {false, false, true};
    run_test("Test eliminate candidate with the lowest vote", expected2);

    // Test case 3: No elimination when minimum votes do not match any candidate's votes
    candidates[0] = (candidate) {"Alice", 5, false};
    candidates[1] = (candidate) {"Bob", 4, false};
    candidates[2] = (candidate) {"Charlie", 3, false};
    eliminate(2);
    bool expected3[] = {false, false, false};
    run_test("Test no elimination when no candidate has min votes", expected3);
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
