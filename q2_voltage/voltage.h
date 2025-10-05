#ifndef VOLTAGE_H
#define VOLTAGE_H

/**
 * Checks if the given voltage is within valid range (1.8V - 3.3V)
 * @param voltage The measured voltage
 * @return 1 if valid, 0 if invalid
 */
int is_valid_voltage(float voltage);

#endif

