#include <stdio.h>
#include "../q2_voltage/voltage.h"

int main() {
    int passed = 0;
    int total = 6;

    // Test valid voltages (should return 1)
    if (is_valid_voltage(1.8f) == 1) passed++;
    if (is_valid_voltage(2.5f) == 1) passed++;
    if (is_valid_voltage(3.3f) == 1) passed++;

    // Test invalid voltages (should return 0)
    if (is_valid_voltage(1.7f) == 0) passed++;
    if (is_valid_voltage(3.4f) == 0) passed++;
    if (is_valid_voltage(0.0f) == 0) passed++;

    printf("passed: %d\n", passed);
    printf("total tests: %d\n", total);

    if (passed == total) {
        printf("✓ all tests passed!\n");
    }

    return (passed == total) ? 0 : 1;
}

