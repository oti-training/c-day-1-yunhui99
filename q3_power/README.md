# Exercise 3: Power Calculator

## Objective
Write a C program to calculate power consumption (P = V * I) and validate against a 5.0W limit.

## Instructions
1. In `power.c`, prompt for voltage (V) and current (A) inputs.
2. Calculate power using multiplication.
3. Check if power <= 5.0W and print "PASS" or "FAIL".
4. If fail, also print excess power.

## Compilation
```bash
gcc -Wall -Wextra -std=c99 -o power power.c
./power
```

## Expected Behavior
- Input V and I, get power calculation and validation result.

