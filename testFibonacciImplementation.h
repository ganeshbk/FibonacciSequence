//
// Created by Ganesh Kudleppanavar on 1/16/20.
//

#ifndef UNTITLED_TESTFIBONACCIIMPLEMENTATION_H
#define UNTITLED_TESTFIBONACCIIMPLEMENTATION_H
#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>
#include "fibonacciRecursive.h"
#include "fibonacciIterative.h"

// @breif:  Funtion  to unit test multiple fibonacci number implementations.
// @param:  [out]   ->true if all implementations match reference values else exits out with value 1;

bool testFibonacciImplementataion(void)
{
        printf("TESTING FIBONACCI IMPLEMENTATION\n");
        int inputTestVector[4] = {-1, 0, 1, 55};
        unsigned long int fibReference[4] = {-1, 0, 1, 139583862445};

        for(int i=0; i<4; i++){
            unsigned long int fibOutput = fibonacciRecursive(inputTestVector[i]);
            if(fibReference[i] != fibOutput)
            {
                printf("UNIT TEST FAILED fibonacciRecursive for n=%d fib(n)=%ld",inputTestVector[i], fibOutput);
                exit(1);
            }

            if(fibReference[i] != fibonacciIterative(inputTestVector[i]))
            {
                printf("UNIT TEST FAILED fibonacciIterative for n=%d fib(n)=%ld", inputTestVector[i], fibOutput);
                exit(1);
            }
        }
        printf("UNIT TEST PASSED");
    return true;
}
#endif //UNTITLED_TESTFIBONACCIIMPLEMENTATION_H
