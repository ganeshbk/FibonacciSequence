cmake_minimum_required(VERSION 3.15)
project(FibonacciSequence C)

set(CMAKE_C_STANDARD 11)
add_executable(FibonacciSequence main.c fibonacciRecursive.h  fibonacciIterative.h testFibonacciImplementation.h fibonacciMemorize.h)