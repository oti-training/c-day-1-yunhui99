#include <stdio.h>
#include <math.h>
#include "../q3_power/power.h"

int main() {
    int passed = 0;
    int total = 6;
    float tolerance = 0.001f;

    // Test calculate_power
    if (fabs(calculate_power(2.0f, 2.0f) - 4.0f) < tolerance) passed++;
    if (fabs(calculate_power(1.8f, 2.5f) - 4.5f) < tolerance) passed++;
    if (fabs(calculate_power(3.3f, 1.0f) - 3.3f) < tolerance) passed++;

    // Test is_valid_power
    if (is_valid_power(4.0f) == 1) passed++;
    if (is_valid_power(5.0f) == 1) passed++;
    if (is_valid_power(6.0f) == 0) passed++;

    printf("passed: %d\n", passed);
    printf("total tests: %d\n", total);

    if (passed == total) {
        printf("✓ all tests passed!\n");
    }

    return (passed == total) ? 0 : 1;
}

