# Day 1: C Programming Fundamentals for Hardware Validation

This repository contains starter templates for Day 1 exercises focused on basic C programming for post-silicon validation tasks.

## Structure
- `q1_hello/`: Hello World program
- `q2_voltage/`: Voltage validation program
- `q3_power/`: Power calculation program
- `tests/`: Test executables for automated grading
- `Makefile`: Build all exercises and tests

## Setup
1. Clone this repository
2. Install dependencies: `sudo apt-get install gcc make`
3. Build: `make all`
4. Run individual exercises from their folders

## Exercises
Complete each exercise by filling in the TODOs in the respective `.c` files.

### Q1: Hello Validation World
- File: `q1_hello/hello.c`
- Objective: Print welcome messages

### Q2: Voltage Validator
- File: `q2_voltage/voltage.c`
- Objective: Read and validate voltage (1.8V - 3.3V)

### Q3: Power Calculator
- File: `q3_power/power.c`
- Objective: Calculate power (P = V * I) and check against 5.0W limit

## Building and Testing
```bash
make clean
make all    # Builds exercises and tests
make test   # Runs tests
```

## Grading
This repo is configured for GitHub Classroom autograding. Push your changes to trigger automated tests.

## Compilation Flags
All programs use C99 standard with strict warnings:
- `-Wall -Wextra -std=c99`
