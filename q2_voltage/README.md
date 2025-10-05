# Exercise 2: Voltage Validator

## Objective
Create a C program that validates if a measured voltage is within the acceptable range for a chip (1.8V to 3.3V).

## Instructions
1. In `voltage.c`, prompt the user for a voltage reading.
2. Use `scanf` to read the float value.
3. Check if it's between 1.8V and 3.3V.
4. Print "PASS" or "FAIL" accordingly.

## Compilation
```bash
gcc -Wall -Wextra -std=c99 -o voltage voltage.c
./voltage
```

## Expected Behavior
- Input a voltage and get appropriate pass/fail message.

