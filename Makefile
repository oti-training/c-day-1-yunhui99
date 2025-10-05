# Makefile for Day 1 C Exercises Starter Template

CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -g
TARGETS = q1_hello/hello q2_voltage/voltage q3_power/power
TESTS = tests/test_voltage tests/test_power

all: $(TARGETS) $(TESTS)
	@echo "✓ all day 1 programs compiled successfully!"

q1_hello/hello: q1_hello/hello.c
	$(CC) $(CFLAGS) -o $@ $<

q2_voltage/voltage: q2_voltage/voltage.c q2_voltage/voltage.h
	$(CC) $(CFLAGS) -o $@ $<

q3_power/power: q3_power/power.c q3_power/power.h
	$(CC) $(CFLAGS) -o $@ $<

tests/test_voltage: tests/test_voltage.c q2_voltage/voltage.c q2_voltage/voltage.h
	$(CC) $(CFLAGS) -DUNIT_TEST -o $@ tests/test_voltage.c q2_voltage/voltage.c

tests/test_power: tests/test_power.c q3_power/power.c q3_power/power.h
	$(CC) $(CFLAGS) -DUNIT_TEST -o $@ tests/test_power.c q3_power/power.c

test: $(TESTS)
	@echo "Running tests..."
	@./tests/test_voltage || true
	@./tests/test_power || true

clean:
	rm -f $(TARGETS) $(TESTS) *.o *~ voltage_results.txt power_results.txt

.PHONY: all clean test
