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

// Constants
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
int voter_count;
int candidate_count;

/*
 * Function: tabulate
 * - Updates vote counts for non-eliminated candidates based on voters' preferences.
 *
 * Functionality:
 * - Loops through each voter and looks for their highest-ranked candidate who has not been
 * eliminated.
 * - Updates that candidate's vote count and stops further checks for that voter.
 */
void tabulate(void)
{

    // Reset all candidate vote counts
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].votes = 0;
    }

    // TODO: fill your code here

    return;
}

/*
 * Function to run an individual test case to validate the tabulate function
 *
 * Parameters:
 * - test_name: A string describing the test case.
 * - expected_votes: An array of expected vote counts for each candidate.
 * - expected_eliminated: An array of boolean values indicating if each candidate is eliminated.
 */
void run_test(const char *test_name, int expected_votes[], bool expected_eliminated[])
{
    bool pass = true;

    // Check if votes and elimination status match the expected values
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes != expected_votes[i] ||
            candidates[i].eliminated != expected_eliminated[i])
        {
            pass = false;
            break;
        }
    }

    // Display result
    if (pass)
    {
        printf(GREEN "[PASS]" RESET " %s\n", test_name);
    }
    else
    {
        printf(RED "[FAIL]" RESET " %s\n", test_name);
        printf("    Expected votes: ");
        for (int i = 0; i < candidate_count; i++)
            printf("%d ", expected_votes[i]);
        printf("\n    Got votes:      ");
        for (int i = 0; i < candidate_count; i++)
            printf("%d ", candidates[i].votes);
        printf("\n");
    }
}

/*
 * Function to run multiple test cases for the tabulate function
 */
void run_test_cases(void)
{
    // Example setup: 3 candidates and 5 voters
    candidate_count = 3;
    voter_count = 5;

    // Initialize candidates
    candidates[0] = (candidate) {"Alice", 0, false};
    candidates[1] = (candidate) {"Bob", 0, false};
    candidates[2] = (candidate) {"Charlie", 0, false};

    // Test case 1: No candidates eliminated, all voters have clear top preferences
    preferences[0][0] = 0; // Voter 0 votes for Alice
    preferences[1][0] = 1; // Voter 1 votes for Bob
    preferences[2][0] = 2; // Voter 2 votes for Charlie
    preferences[3][0] = 0; // Voter 3 votes for Alice
    preferences[4][0] = 1; // Voter 4 votes for Bob

    tabulate();
    int expected_votes_1[] = {2, 2, 1};
    bool expected_eliminated_1[] = {false, false, false};
    run_test("Test case 1: No candidates eliminated", expected_votes_1, expected_eliminated_1);

    // Test case 2: Bob is eliminated, voters for Bob go to their next choice
    candidates[1].eliminated = true;
    preferences[1][1] = 0; // Voter 1's second choice is Alice
    preferences[4][1] = 2; // Voter 4's second choice is Charlie

    tabulate();
    int expected_votes_2[] = {3, 0, 2}; // Bob eliminated, Alice and Charlie get extra votes
    bool expected_eliminated_2[] = {false, true, false};
    run_test("Test case 2: Bob eliminated", expected_votes_2, expected_eliminated_2);

    // Test case 3: All candidates except Alice eliminated, all votes go to Alice
    candidates[2].eliminated = true;

    tabulate();
    int expected_votes_3[] = {5, 0, 0}; // All votes go to Alice as last remaining
    bool expected_eliminated_3[] = {false, true, true};
    run_test("Test case 3: Only Alice left", expected_votes_3, expected_eliminated_3);
}

/*
 * Run all tests and display overall results
 */
void run_all_tests(void)
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
