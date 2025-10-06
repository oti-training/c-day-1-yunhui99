/*
 * Day 1 Exercise 2: Voltage Validator
 *
 * TODO: Implement a program that reads a voltage value
 * and checks if it's within the valid range (1.8V - 3.3V).
 *
 * Compile with: gcc -Wall -Wextra -std=c99 -o voltage voltage.c
 * Run with: ./voltage
 */

#include <stdio.h>
#include "voltage.h"

/**
 * Checks if the given voltage is within valid range (1.8V - 3.3V)
 * @param voltage The measured voltage
 * @return 1 if valid, 0 if invalid
 */
int is_valid_voltage(float voltage) {
    if (voltage < voltage_min || voltage > voltage_max) {
        printf("FAIL\n");
        return 0;
    } else {
        printf("PASS\n");
        return 1;
    }
}

#ifndef UNIT_TEST
int main(void) {
    float measured_voltage;

    printf("Voltage Validator for Post-Silicon Testing\n");
    printf("Valid range: %.1fV to %.1fV\n", voltage_min, voltage_max);

    printf("Enter measured voltage: ");
    scanf("%f", &measured_voltage);

    int result = is_valid_voltage(measured_voltage);
    if (result)
        printf("Voltage %.2fV is within range.\n", measured_voltage);
    else
        printf("Voltage %.2fV is out of range!\n", measured_voltage);

    return 0;
}
#endif



