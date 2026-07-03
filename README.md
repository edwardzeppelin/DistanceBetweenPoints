# 3D Euclidean Distance & Mission Time Calculator

A lightweight C++ console application that calculates the Euclidean distance between points in a 3D coordinate system, estimates travel time based on a constant velocity, and benchmarks computation performance.
This project is structured specifically to analyze compiler optimizations and inspect the generated assembly code for low-level performance tuning.

main.cpp — Handles data initialization (hardcoded trajectory points: *Alpha, Bravo, Charlie, Delta*), manages the execution loop, and outputs benchmark metrics to the console.
func.h — Contains the core `distntime` function which executes the distance and time calculations.
