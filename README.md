# FibonacciSequence
PART-- 1

Solution to the part 1 of the problem is solved using fibonacciRecursive function.
THis is the slowest method of obtaining the nth Fibonacci number.

The code that should be released to production assuming all the standard libs are available will be
    fibonacciIterative.h
    fibonacciMemorize.h
    fibonacciRecursive.h

PART --2 
 iterative implementation solution is implemented using fibonacciIterative function
 as it computes results in O(n) time.
 Recursive solution can be used in dynamic programming. Where the values already computed can be stored in a array. 
 this can reduce the computation still requiring the recursion stack memory.
 
 Iterative solution would be used in production for memory constrained devices as it would not need extra stack space.


PART --3 
 If the nth fibonacci method is called multiple times the best way would be to memorise the 
 ith Fibonacci number, resulting is constant time retrieval of the already calculated value.
 
 
Initial Commit:
* This commit calculates the nth Fibonacci sequence using three different methods
  1. Recursion.
  2. Iterative.
  3. Memorization.

* To compile this project you need to have Cmake and gcc installed.
  An example of the command to build is :
  cmake -DCMAKE_BUILD_TYPE=Debug -G "CodeBlocks - Unix Makefiles" /Users/supriyakarishetti/FibonacciSequence
  this was tested on mac and should work on ubuntu.
  
* Unit tests for all the three methods are also included.