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
 * Objective: - Implement the blur function to create the effect of blurring or softening an image.
              - Which works by taking each pixel and, for each color value, giving it a new value by averaging the color values of neighboring pixels.
              - Consider the following grid of pixels
                      1   2   3   4
                      5   6   7   8
                      9   10  11  12
                      13  14  15  16
              - The new value of each pixel would be the average of the values of all of the pixels,
                that are within 1 row and column of the original pixel (forming a 3x3 box)
              - For example, each of the color values for pixel 6 would be obtained by averaging
                the original color values of pixels 1, 2, 3, 5, 6, 7, 9, 10, and 11 (note that pixel 6 itself is included in the average)
              - For a pixel along the edge or corner, like pixel 15, we would still look for all pixels within 1 row and column: in this case, pixels 10, 11, 12, 14, 15, and 16.
              - Note: When implementing the blur function, you might find that blurring one pixel ends up affecting the blur of another pixel.
 *
 * Function Signature:
 * void blur(int height, int width, RGBTRIPLE image[height][width])
 *
 * Return Value:
 * - Return 0 if the operation is successful, or -1 if there is an error (e.g., unable to open a file).
 *
 *  Emxamples:
 *  - Example 1
 *    Input: image[3][3] = {
                            {{10,   20,  30},    {40,  50, 60},   {70,  80,  90}},
                            {{100,  110, 120},   {130, 140, 150}, {160, 170, 180}},
                            {{190,  200, 210},   {220, 230, 240}, {25,  26,  27}}
                           }
 *    Output: image[3][3] = {
                            {{70,   80,  90},    {85,  95,  105},  {100, 110, 120}},
                            {{115,  125, 135},   {105, 114, 123},  {108, 116, 125}},
                            {{160,  170, 180},   {138, 146, 155},  {134, 142, 149}}
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
void blur(int height, int width, RGBTRIPLE image[height][width]) {
    // TODO: Your code implements here
}


// Simple function to show whether a test passed or failed
void run_test(int height, int width, RGBTRIPLE image[3][3], RGBTRIPLE check[3][3]) {
    char *s = "Converted to blur";
    blur(height, width, image);

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
        {{70, 80, 90}, {85, 95, 105}, {100, 110, 120}},
        {{115, 125, 135}, {105, 114, 123}, {108, 116, 125}},
        {{160, 170, 180}, {138, 146, 155}, {134, 142, 149}}
    };

    RGBTRIPLE image_2[3][3] = {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
        {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}
    };
    RGBTRIPLE check_2[3][3] = {
        {{7, 8, 9}, {9, 10, 11}, {10, 11, 12}},
        {{12, 13, 14}, {13, 14, 15}, {15, 16, 17}},
        {{16, 17, 18}, {18, 19, 20}, {19, 20, 21}}
    };

    RGBTRIPLE image_3[3][3] = {
        {{3, 4, 5}, {4, 5, 6}, {7, 8, 9}},
        {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
        {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}
    };
    RGBTRIPLE check_3[3][3] = {
        {{8, 9, 10}, {9, 10, 11}, {10, 11, 12}},
        {{12, 13, 14}, {13, 14, 15}, {15, 16, 17}},
        {{16, 17, 18}, {18, 19, 20}, {19, 20, 21}}
    };

    RGBTRIPLE image_4[3][3] = {
        {{30, 40, 50}, {4, 5, 6}, {70, 80, 90}},
        {{10, 11, 12}, {130, 140, 150}, {16, 17, 18}},
        {{190, 200, 210}, {22, 23, 24}, {25, 26, 27}}
    };
    RGBTRIPLE check_4[3][3] = {
        {{44, 49, 55}, {43, 49, 54}, {55, 61, 66}},
        {{64, 70, 75}, {55, 60, 65}, {45, 49, 53}},
        {{88, 94, 99}, {66, 70, 74}, {48, 52, 55}}
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
