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
 * Objective: Implement the reflect function to swap the values of pixels on opposite sides of a row.

 *
 * Function Signature:
 * void reflect(int height, int width, RGBTRIPLE image[height][width])
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
                            {{70,  80,  90},  {40,  50,  60},  {10,  20,  30}},
                            {{160, 170, 180}, {130, 140, 150}, {100, 110, 120}},
                            {{25,  26,  27},  {220, 230, 240}, {190, 200, 210}}
                           }
 */
// Helper function
bool compare_rbg(RGBTRIPLE t1, RGBTRIPLE t2) {
    if ( (t1.rgbtBlue != t2.rgbtBlue) || (t1.rgbtGreen != t2.rgbtGreen) || (t1.rgbtRed != t2.rgbtRed)) {
        return false;
    }
    return true;
}

// Implement the function here
void reflect(int height, int width, RGBTRIPLE image[height][width]) {
    // TODO: Your code implements here
}


// Simple function to show whether a test passed or failed
void run_test(int height, int width, RGBTRIPLE image[3][3], RGBTRIPLE check[3][3]) {
    char *s = "Converted to reflect";
    reflect(height, width, image);

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
        {{70, 80, 90}, {40, 50, 60}, {10, 20, 30}},
        {{160, 170, 180}, {130, 140, 150}, {100, 110, 120}},
        {{25, 26, 27}, {220, 230, 240}, {190, 200, 210}}
    };

    RGBTRIPLE image_2[3][3] = {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
        {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}
    };

    RGBTRIPLE check_2[3][3] = {
        {{7, 8, 9}, {4, 5, 6}, {1, 2, 3}},
        {{16, 17, 18}, {13, 14, 15}, {10, 11, 12}},
        {{25, 26, 27}, {22, 23, 24}, {19, 20, 21}}
    };

    RGBTRIPLE image_3[3][3] = {
        {{3, 4, 5}, {4, 5, 6}, {7, 8, 9}},
        {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
        {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}
    };

    RGBTRIPLE check_3[3][3] = {
        {{7, 8, 9}, {4, 5, 6}, {3, 4, 5}},
        {{16, 17, 18}, {13, 14, 15}, {10, 11, 12}},
        {{25, 26, 27}, {22, 23, 24}, {19, 20, 21}}
    };
    RGBTRIPLE image_4[3][3] = {
        {{30, 40, 50}, {4, 5, 6}, {70, 80, 90}},
        {{10, 11, 12}, {130, 140, 150}, {16, 17, 18}},
        {{190, 200, 210}, {22, 23, 24}, {25, 26, 27}}
    };

    RGBTRIPLE check_4[3][3] = {
        {{70, 80, 90}, {4, 5, 6}, {30, 40, 50}},
        {{16, 17, 18}, {130, 140, 150}, {10, 11, 12}},
        {{25, 26, 27}, {22, 23, 24},{190, 200, 210}}
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
