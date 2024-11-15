#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

// Define the RGBTRIPLE struct
typedef struct {
    unsigned char rgbtBlue;
    unsigned char rgbtGreen;
    unsigned char rgbtRed;
} RGBTRIPLE;

// ANSI color codes for green (PASS) and red (FAIL)
#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

/*
 * Objective: Implement the sepia function to change the red, green, blue values ​​by calculating their formula
                            sepiaRed = .393 * originalRed + .769 * originalGreen + .189 * originalBlue
                            sepiaGreen = .349 * originalRed + .686 * originalGreen + .168 * originalBlue
                            sepiaBlue = .272 * originalRed + .534 * originalGreen + .131 * originalBlue
              It’s also possible that the result of the formula is a number greater than 255.
              In that case, the red, green, and blue values should be capped at 255.
              As a result, we can guarantee that the resulting red, green, and blue values will be whole numbers between 0 and 255, inclusive.

 *
 * Function Signature:
 * void sepia(int height, int width, RGBTRIPLE image[height][width])
 *
 * Return Value:
 * - Return 0 if the operation is successful, or -1 if there is an error (e.g., unable to open a file).
 *
 *  Emxamples:
 *  - Example 1
 *    Input: image[3][3] = {
                            {{10,  20,  30},  {40,  50,  60},  {70,  80,  90}},
                            {{100, 110, 120}, {130, 140, 150}, {160, 170, 180}},
                            {{190, 200, 210}, {220, 230, 240}, {25,  26,  27}}
                           }
 *    Output: image[3][3] = {
                            {{20,  26,  29},  {48,  62,  70},  {76,  98,  110}},
                            {{104, 134, 151}, {133, 170, 191}, {161, 206, 232}},
                            {{189, 242, 255}, {217, 255, 255}, {25,  31,  35}}
                           }
 */
// Helper function
int min_check(int num_1, int num_2) {
    if (num_1 >= num_2) {
        return num_2;
    }
    return num_1;
}

bool compare_rbg(RGBTRIPLE t1, RGBTRIPLE t2) {
    if ( (t1.rgbtBlue != t2.rgbtBlue) || (t1.rgbtGreen != t2.rgbtGreen) || (t1.rgbtRed != t2.rgbtRed)) {
        return false;
    }
    return true;
}

// Implement the function here
void sepia(int height, int width, RGBTRIPLE image[height][width]) {
    // TODO: Your code implements here
}


// Simple function to show whether a test passed or failed
void run_test(int height, int width, RGBTRIPLE image[3][3], RGBTRIPLE check[3][3]) {
    char *s = "Converted to sepia";
    sepia(height, width, image);

    int pass = 1;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (!compare_rbg(image[i][j], check[i][j])) {
                pass = 0;
            }
        }
    }
    if (pass) {
        printf(GREEN "[PASS]" RESET " %s\n", s);
    } else {
        printf(RED "[FAIL]" RESET " %s\n", s);
    }
}

// Run all tests and display overall results
void run_all_tests() {
    int height = 3;
    int width = 3;

    RGBTRIPLE image_1[3][3] = {
        {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}},
        {{100, 110, 120}, {130, 140, 150}, {160, 170, 180}},
        {{190, 200, 210}, {220, 230, 240}, {25, 26, 27}}
    };


    RGBTRIPLE check_1[3][3] = {
        {{20, 26, 29}, {48, 62, 70}, {76, 98, 110}},
        {{104, 134, 151}, {133, 170, 191}, {161, 206, 232}},
        {{189, 242, 255}, {217, 255, 255}, {25, 31, 35}}
    };

    RGBTRIPLE image_2[3][3] = {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
        {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}
    };

    RGBTRIPLE check_2[3][3] = {
        {{2, 3, 3}, {5, 6, 7}, {8, 10,11}},
        {{10, 13, 15}, {13, 17, 19}, {16, 21, 23}},
        {{19, 24, 27}, {22, 28, 31}, {25, 31, 35}}
    };

    RGBTRIPLE image_3[3][3] = {
        {{3, 4, 5}, {4, 5, 6}, {7, 8, 9}},
        {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
        {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}
    };

    RGBTRIPLE check_3[3][3] = {
        {{4, 5, 6}, {5, 6, 7}, {8, 10, 11}},
        {{10, 13, 15}, {13, 17, 19}, {16, 21, 23}},
        {{19, 24, 27}, {22, 28, 31}, {25, 31, 35}}
    };
    RGBTRIPLE image_4[3][3] = {
        {{30, 40, 50}, {4, 5, 6}, {70, 80, 90}},
        {{10, 11, 12}, {130, 140, 150}, {16, 17, 18}},
        {{190, 200, 210}, {22, 23, 24}, {25, 26, 27}}
    };

    RGBTRIPLE check_4[3][3] = {
        {{39, 50, 56}, {5, 6, 7}, {76, 98, 110}},
        {{10, 13, 15}, {133, 170, 191}, {16, 21, 23}},
        {{189, 242, 255}, {22, 28, 31}, {25, 31, 35}}
    };
    printf("Running tests...\n\n");
    run_test(height, width, image_1, check_1);
    run_test(height, width, image_2, check_2);
    run_test(height, width, image_3, check_3);
    run_test(height, width, image_4, check_4);
    printf("\nAll tests completed!\n");
}

int main() {

    run_all_tests();
    return 0;
}
